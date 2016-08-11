function Compiler () {};

Compiler.prototype.compile = function (program) {
  return this.pass3(this.pass2(this.pass1(program)));
};

Compiler.prototype.tokenize = function (program) {
  // Turn a program string into an array of tokens.  Each token
  // is either '[', ']', '(', ')', '+', '-', '*', '/', a variable
  // name or a number (as a string)
  var regex = /\s*([-+*/\(\)\[\]]|[A-Za-z]+|[0-9]+)\s*/g;
  return program.replace(regex, ":$1").substring(1).split(':').map( function (tok) {
    return isNaN(tok) ? tok : tok|0;
  });
};

Compiler.prototype.pass1 = function (program) {
  var tokens = this.tokenize(program);

  tokens.shift(); /* [ */
  var args = []; while (tokens[0] !== ']') args.push(tokens.shift());
  tokens.shift(); /* ] */

  function getPriority(c) {return  {'(':1, ')':1, '+':2, '-':2, '*':3, '/':3}[c] || 0 }
  var polish = [], stack = [], i;

  tokens.forEach(function(token) {
    if (typeof token === 'number')    polish.push({op: 'imm', n: token});                  // number
    else if (!getPriority(token))     polish.push({op: 'arg', n: args.indexOf(token)});    // arg
    else if (token == '(') stack.push(token);
    else if (token == ')') while (stack.length && (i = stack.pop()) != '(') polish.push(i);
    else {
      while (stack.length != 0 && getPriority(stack[stack.length - 1]) >= getPriority(token)) polish.push(stack.pop());
      stack.push(token);
    }
  });
  while (stack.length) polish.push(stack.pop());

  polish.forEach(function(p) {
    if (p === '+' || p === '-' || p === '*' || p === '/') {
      var b = stack.pop(), a = stack.pop();
      stack.push({op: p, a: a, b: b});
    } else {
      stack.push(p);
    }
  });

  return stack[0];  // stack.length == 1
};

Compiler.prototype.pass2 = function (ast) {
  // return AST with constant expressions reduced
  function _pass2(ast) {
    if ('a' in ast) {   // operator
      var op = ast.op, a = _pass2(ast.a), b = _pass2(ast.b);
      if (a.op === 'imm' && b.op === 'imm') {    // can eval
        var value;
        switch (op) {
          case '+': value = a.n + b.n; break;
          case '-': value = a.n - b.n; break;
          case '*': value = a.n * b.n; break;
          case '/': value = a.n / b.n; break;
        }
        return {
          op: 'imm',
          n: value
        }
      } else {         // just copy
        return {
          op: op,
          a: a,
          b: b
        }
      }
    } else {
      return {      // just copy
        op: ast.op,
        n: ast.n
      }
    }
  }
  return _pass2(ast);
};
Compiler.prototype.pass3 = function (ast) {
  // return assembly instructions
  function _pass3(ast) {
    if (ast.op == 'imm') return ['IM ' + String(ast.n)];
    if (ast.op == 'arg') return ['AR ' + String(ast.n)];
    // operator
    var instruction = {'+':'AD', '-':'SU', '*':'MU', '/':'DI'}[ast.op];
    return []
      .concat(_pass3(ast.a))      // stack=[]  R0=a R1=?
      .concat('PU')               // stack=[a] R0=a R1=?
      .concat(_pass3(ast.b))      // stack=[a] R0=b R1=?
      .concat('SW')               // stack=[a] R0=? R1=b
      .concat('PO')               // stack=[]  R0=a R1=b
      .concat(instruction)        // stack=[]  R0=! R1=b
  }
  return _pass3(ast);
};
