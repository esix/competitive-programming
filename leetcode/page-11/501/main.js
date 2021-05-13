/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var findMode = function(root) {
  if (!root) return [];
  
  let rec = (root) => {
      let l = root.left ? rec(root.left) : {};
      let r = root.right ? rec(root.right) : {};
      let merged = {...l, ...r, [root.val]: (l[root.val] || 0) + 1 + (r[root.val] || 0)};
      let max = -Infinity;
      Object.keys(merged).forEach(val => max = Math.max(max, merged[val]));
      return merged;
  }
  let merged = rec(root);
  let max = -Infinity;
  let res = [];
  Object.keys(merged).forEach(val => max = Math.max(max, merged[val]));
  Object.keys(merged).forEach(val => {
      if (merged[val] == max) res.push(+val);
   });
  return res
};
