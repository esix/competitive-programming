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


function getSolutionFiles(dir) {
  const solutions = fs.readdirSync(dir).filter(file => file.match(/^main/));   // only files name `main.ext'
  return solutions;
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
    
  for (let file of files) {
    const fullPath = `${dir}/${file}`;
    if (fs.lstatSync(fullPath).isDirectory()) {
      process(fullPath);
      recursiveDirWalk(fullPath, process);
    }
  }   
}


function processSolution(dir) {
  try {
    const readme = fs.readFileSync(`${dir}/README.md`, 'utf8');
    if (!readme.match(/^\#\s\[(.+?)\]\((.+?)\)/)) {                  // # [title](url)
        console.error('File: ', `${dir}/README.md`, 'has invalid first line in README.md');
        console.error(readme)
        throw new Error('Invalid readme');
    }

    const taskTitle = RegExp.$1;
    const taskUrl = RegExp.$2;

    let solutions = [];

    if (isSolutionDir(dir)) {
      let mainFiles = fs.readdirSync(dir).filter(file => file.match(/^main/));   // only files name `main.ext'

      solutions = solutions.concat(mainFiles.map(mainFile => ({
        taskId: path.basename(dir),
        taskTitle,
        taskUrl,
        solutionFile: `${dir}/${mainFile}`.replace(/\.\//, ''),
      })));

    } else if (hasSolutionSubDirs(dir)) {
      solutions.push({
        taskId: '',
        taskTitle,
        taskUrl,
        solutionFile: `${dir}/`.replace(/\.\//, ''),
      });
    }

    return solutions;
    
  } catch (err) {
    console.error('Error processing dir', dir);
    console.error(err);
    return [];
  }
}



let solutions = [];

recursiveDirWalk('.', (dir) => {
  solutions = solutions.concat(processSolution(dir));
});
  

const makeProblemLink = (s) => `[${s.taskTitle}](${s.taskUrl})`;

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
let newReadmeLines = loadMainReadmeFileLines();
newReadmeLines.push(`| ${wide('ID', idColWidth)} | ${wide('Problem statement', problemColWidth)} | ${wide('Solution', solutionColWidth)} |`);
newReadmeLines.push(`|${dashes(idColWidth+2)}|${dashes(problemColWidth+2)}|${dashes(solutionColWidth+2)}|`);
newReadmeLines = newReadmeLines.concat(solutions.map(makeSolutionLine));
newReadmeLines.push('\n');

console.log(newReadmeLines.join('\n'))

if (process.argv.length > 2) {
  let fileName = process.argv[2];
  console.log('writing ', fileName);
  fs.writeFileSync(fileName, newReadmeLines.join('\n'));
}