/**
 * @param {string[]} paths
 * @return {string[][]}
 */
 var findDuplicate = function(paths) {
  let filesByContent = {};
  paths.forEach(path => {
      let spaceIdx = path.indexOf(' ');
      let files = path.slice(spaceIdx + 1);
      path = path.slice(0, spaceIdx);
      files.split(' ').forEach(file => {
          file.match(/^(.+?)\((.+)\)$/);
          file = RegExp.$1;
          let content = RegExp.$2;
          if (!filesByContent[content]) filesByContent[content] = [];
          filesByContent[content].push(path + '/' + file);
      })
  });
  let result = Object.values(filesByContent).filter(g => g.length > 1);
  return result;
};
