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
 * @return {string[]}
 */
var binaryTreePaths = function(root) {
  if (!root) return [];
  if (!root.left && !root.right) {
      return [String(root.val)];
  }
  let result = (root.left ? binaryTreePaths(root.left) : [])
              .concat(root.right ? binaryTreePaths(root.right) : [])
              .map(path => root.val + '->' + path);
  return result;
};