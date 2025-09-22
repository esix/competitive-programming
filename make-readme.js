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

function getFileNameAndExtension(fileName) {
  const dot = fileName.lastIndexOf(".") >>> 0;
  return [fileName.slice(0, dot), fileName.slice(dot + 1)];
}


const SOLUTION_FILE_NAMES = ['Main', 'main', 'solution', 'Solution'];
const FORBIDDEN_EXTENSIONS = ['class', 'cmi', 'cmo', 'ali', 'o', '', 'exe'];


function getSolutionFiles(dir) {
  let solutions = fs.readdirSync(dir).filter(file => {
    const [name, ext] = getFileNameAndExtension(file);
    return SOLUTION_FILE_NAMES.includes(name) && !FORBIDDEN_EXTENSIONS.includes(ext);
  });
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

const LANGUAGE_BY_EXTENSION = {
  'py': 'Python',
  'cpp': 'C++',
  'js': 'JavaScript',
  'go': 'Go',
  'ts': 'TypeScript',
  'pas': 'Pascal',
  'ml': 'OCaml',
  'scm': 'Scheme',
  'bas': 'Basic',
  'java': 'Java',
  'adb': 'Ada',
  'sql': 'SQL',
  'c': 'C',
  'f95': 'Fortran',
  'sh': 'bash',
  'p6': 'Raku',
  'clj': 'Clojure'
}

const GROUPINGS = [
  ['js', 'ts'],
  ['c', 'cpp'],
  ['scm', 'clj']
]

function renderUsedExtensions(lines, countByExt) {
  let count = {};
  for (const [ext, value] of Object.entries(countByExt)) {
    const group = GROUPINGS.find(group => group.includes(ext));
    let keyName;
    if (group) {
      keyName = group.map(ext => LANGUAGE_BY_EXTENSION[ext] ?? ext).join('/');
    } else {
      keyName = LANGUAGE_BY_EXTENSION[ext] ?? ext;
    }

    if (!(keyName in count)) {
      count[keyName] = group?.map(x => 0) ?? [0];
    }

    count[keyName][group?.indexOf(ext) ?? 0] += value;
  }

  lines.push('## Programming Languages')
  lines.push('```');
  let exts = Object.keys(count);
  const sum = (arr) => arr.reduce((acc, v) => acc+ v, 0);
  exts.sort((ext1, ext2) => sum(count[ext2]) - sum(count[ext1]));
  const max = count[exts[0]];
  const maxLanguageLength = Math.max(...Object.keys(count).map(l => l.length));
 
  exts.forEach(ext => {
    const ns = count[ext];
    let ps = ns.map(n => 60 * n / max);
    let bar = ps.map((p, idx) => {
      const isLast = idx === ps.length - 1;
      const char = idx % 2 ? '▒' : '█';
      let bar = ''.padEnd(Math.floor(p), char);
      if (p - Math.floor(p) > 0.5 || bar.length === 0) {
        if (char === '█') {
          if (isLast) bar += '▌';
          else bar += char;
        } else {
          bar += char;
        }   
      }
      return bar;
    }).join('');
    let s = (ext).padEnd(maxLanguageLength + 1, ' ') + 
            bar + 
            ' ' + (ns.join('/'));
    lines.push(s);
  });
  lines.push('```');
  lines.push('')
}


function processSolution(dir, usedExtensions) {
  if (!fs.existsSync(`${dir}/README.md`)) throw new Error('No readme in ' + dir);

  try {
    let readme = fs.readFileSync(`${dir}/README.md`, 'utf8');
    readme = readme.replace(/^\uFEFF/, '');                         // bom

    let match = readme.match(/^\# (.+?) \[⬀\]\((.+?)\)/) ||       // # title [⬀](url)
                readme.match(/^\# \[(.+?)\]\((.+?)\)/) ||         // # [title](url)
                readme.match(/^\# (.+)\n?/);
        
    if (!match) {        
        console.error('File: ', `${dir}/README.md`, 'has invalid first line in README.md');
        console.error(readme)
        throw new Error('Invalid readme');
    }

    const title = match[1].replace(/[`]/g, '');
    const taskUrl = match[2] || '';

    let solutionFiles = getSolutionFiles(dir);
    solutionFiles.forEach(fileName => {                             // find used extensions
      const [name, ext] = getFileNameAndExtension(fileName);
      if (!(ext in usedExtensions)) usedExtensions[ext] = 0;
      usedExtensions[ext]++;
    });
    const files =  solutionFiles.map(file => `${dir}/${file}`.replace(/\.\//, ''));

    let children = [];
    
    const subdirs = fs.readdirSync(dir);
    subdirs.sort(comparator);
  
    for (let subdir of subdirs) {
      const subdirName = `${dir}/${subdir}`;
      if (fs.lstatSync(subdirName).isDirectory()) {
        try {
          let subsolution = processSolution(subdirName, usedExtensions);
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

let usedExtensions = {};
let root = processSolution('.', usedExtensions);

let treeToArray = (root) => {
  let solutions = [];

  let rec = (el) => {
    if (el.files.length) {
      solutions.push(el);
    } else {
      solutions.push({taskId: '', title: el.title, taskUrl: el.taskUrl, dir: el.dir, files: [el.dir + '/'] });
    }
    el.children.forEach(rec);
  }
  root.children.forEach(rec);
  return solutions;
}

let newReadmeLines = [];

if (root.title === 'Competitive programming') {
  newReadmeLines = [
    '# Competitive programming', 
    '', 
    'This repository contains my solutions to various competitive programming problems. I use servers like Codeforces, HackerRank, and LeetCode to practice and improve programming skills.',
    ''];
    renderUsedExtensions(newReadmeLines, usedExtensions);


  root.children.forEach(c => {
    if (!c.children.length) return;

    newReadmeLines.push(`## ${c.title} [⬀](${c.taskUrl})`);
    newReadmeLines.push('');
    let solutions = treeToArray(c);
    newReadmeLines.push(
      solutions.filter(s => s.taskId).map(s => `[${s.title}](${s.dir})`).join(', \n'));
    newReadmeLines.push('');
  })

} else {
  let solutions = treeToArray(root);
  const makeProblemLink = (s) => s.taskUrl ? 
                s.taskId ? `${s.title} [⬀](${s.taskUrl})`
                         : `**${s.title}** [⬀](${s.taskUrl})`
                 : s.title;

  const makeSolutionLink = (s) => s.files.map(f => `[${f.replace(/^.*\//,'') || f.replace(/^.*\/^$/,'').replace(/\/$/, '')}](${f})`).join(', ');

  strLength = s => s.length;

  let idColWidth = Math.max.apply(Math, solutions.map(s => s.taskId).map(strLength));
  let problemColWidth = Math.max.apply(Math, solutions.map(makeProblemLink).map(strLength));
  let solutionColWidth = Math.max.apply(Math, solutions.map(makeSolutionLink).map(strLength));

  idColWidth = Math.max(idColWidth, 'ID'.length);
  problemColWidth = Math.max(problemColWidth, 'Problem'.length);
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
