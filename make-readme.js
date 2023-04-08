const fs = require('fs');
const path = require('path');

function loadMainReadmeFileLines() {
  let lines = [];
  const currentReadme = fs.readFileSync('README.md', 'utf8');
  for (let line of currentReadme.split(/\r\n|\n/)) {
    if (line[0] === '|') {                       // started table: no more lines needed
      break;
    }
    lines.push(line);
  }
  return lines;
}

function isDigit(c) {
  return '0' <= c && c <= '9';
}

function comparator(a, b) {
  const aNum = parseInt(a, 10), bNum = parseInt(b, 10);
  
  // contests - at the end
  if (a[0] == '~' && b[0] != '~') return 1;
  if (a[0] != '~' && b[0] == '~') return -1;

  if (isNaN(aNum) && isNaN(bNum)) {
    return a.localeCompare(b);
  }
  if (isNaN(aNum)) {
    return 1;
  }
  if (isNaN(bNum)) {
    return -1;
  }

  return aNum - bNum;
}


function extractFileExtension(fileName) {
  return fileName.match(/\.(\w+)$/) ? RegExp.$1 : '';
}

function getSolutionFiles(dir) {
  let solutions = fs.readdirSync(dir).filter(file => file.match(/^[Mm]ain/) || file.match(/^[Ss]olution/));   // only files name `main.ext' or 'solution.ext'
  solutions = solutions.filter(fileName => !['class'].includes(extractFileExtension(fileName)));              // forbidden extensions
  return solutions.sort();
}

function isSolutionDir(dir) {
  return getSolutionFiles(dir).length > 0;
}

function hasSolutionSubDirs(dir) {
  const files = fs.readdirSync(dir);
    
  for (let file of files) {
    const fullPath = `${dir}/${file}`;
    if (fs.lstatSync(fullPath).isDirectory()) {
      if (isSolutionDir(fullPath))
        return true;
    }
  }   
}


function recursiveDirWalk(dir, process) {
  const files = fs.readdirSync(dir);

  files.sort(comparator);
    
  for (let file of files) {
    const fullPath = `${dir}/${file}`;
    if (fs.lstatSync(fullPath).isDirectory()) {
      process(fullPath);
      recursiveDirWalk(fullPath, process);
    }
  }   
}


function processSolution(dir) {
  if (!fs.existsSync(`${dir}/README.md`)) throw new Error('No readme in ' + dir);

  try {
    let readme = fs.readFileSync(`${dir}/README.md`, 'utf8');
    readme = readme.replace(/^\uFEFF/, '');                         // bom
    if (!readme.match(/^\#\s\[(.+?)\]\((.+?)\)/) &&                  // # [title](url)
        !readme.match(/^\#\s(.+)\n?/)) {
        console.error('File: ', `${dir}/README.md`, 'has invalid first line in README.md');
        console.error(readme)
        throw new Error('Invalid readme');
    }

    const title = RegExp.$1.replace(/[()]/g, '');
    const taskUrl = RegExp.$2 || '';

    let solutionFiles = getSolutionFiles(dir);
    const files =  solutionFiles.map(file => `${dir}/${file}`.replace(/\.\//, ''));

    let children = [];
    
    const subdirs = fs.readdirSync(dir);
    subdirs.sort(comparator);
  
    for (let subdir of subdirs) {
      const subdirName = `${dir}/${subdir}`;
      if (fs.lstatSync(subdirName).isDirectory()) {
        try {
          let subsolution = processSolution(subdirName);
          children.push(subsolution);
        } catch (err) {
          // its ok
        }
      }
    }

    const taskId = path.basename(dir);

    let solution = { taskId, title, taskUrl,  dir: dir.replace(/\.\//, ''),  files,  children };

    return solution;
    
  } catch (err) {
    console.error('Error processing dir', dir);
    console.error(err);
    throw err;
  }
}


let root = processSolution('.');

let treeToArray = (root) => {
  let solutions = [];

  let rec = (el) => {
    if (el.files.length) {
      el.files.forEach(solutionFile => 
        solutions.push({taskId: el.taskId, title: el.title, taskUrl:el.taskUrl, dir: el.dir, solutionFile }));
    } else {
      solutions.push({taskId: '', title: el.title, taskUrl:el.taskUrl, dir: el.dir, solutionFile: el.dir + '/' });
    }
    el.children.forEach(rec);
  }
  root.children.forEach(rec);
  return solutions;
}

let newReadmeLines = [];

if (root.title === 'Competitive programming') {
  newReadmeLines = ['# Competitive programming', ''];

  root.children.forEach(c => {
    if (!c.children.length) return;
    console.log(c);

    newReadmeLines.push(`## [${c.title}](${c.taskUrl})`);
    newReadmeLines.push('');
    let solutions = treeToArray(c);
    newReadmeLines.push(
      solutions.filter(s => s.taskId).map(s => `[${s.title}](${s.dir})`).join(', \n'));
    newReadmeLines.push('');
  })

} else {
  let solutions = treeToArray(root);
  const makeProblemLink = (s) => s.taskUrl ? `[${s.title}](${s.taskUrl})` : s.title;

  const makeSolutionLink = (s) => `[${s.solutionFile}](${s.solutionFile})`;

  strLength = s => s.length;

  let idColWidth = Math.max.apply(Math, solutions.map(s => s.taskId).map(strLength));
  let problemColWidth = Math.max.apply(Math, solutions.map(makeProblemLink).map(strLength));
  let solutionColWidth = Math.max.apply(Math, solutions.map(makeSolutionLink).map(strLength));

  idColWidth = Math.max(idColWidth, 'ID'.length);
  problemColWidth = Math.max(problemColWidth, 'Problem statement'.length);
  solutionColWidth = Math.max(solutionColWidth, 'Solution'.length);

  const wide = (str, w) => { while(str.length < w) str += ' '; return str;};
  const dashes = (w) => { let str = '-'; while(str.length < w) str += '-'; return str;};

  const makeSolutionLine = (s) => `| ${wide(s.taskId, idColWidth)} | ${wide(makeProblemLink(s), problemColWidth)} | ${wide(makeSolutionLink(s), solutionColWidth)} |`;

  // make readme file
  newReadmeLines = loadMainReadmeFileLines();
  newReadmeLines.push(`| ${wide('ID', idColWidth)} | ${wide('Problem statement', problemColWidth)} | ${wide('Solution', solutionColWidth)} |`);
  newReadmeLines.push(`|${dashes(idColWidth+2)}|${dashes(problemColWidth+2)}|${dashes(solutionColWidth+2)}|`);
  newReadmeLines = newReadmeLines.concat(solutions.map(makeSolutionLine));
  newReadmeLines.push('\n');
}

console.log(newReadmeLines.join('\n'));

//if (process.argv.length > 2) {
// let fileName = process.argv[2];
let fileName = "README.md";
console.log('writing ', fileName);
fs.writeFileSync(fileName, newReadmeLines.join('\n'));
//}
