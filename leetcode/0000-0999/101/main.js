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
 * @return {boolean}
 */
var isSymmetric = function(root) {
  const rec = (left, right) => {
      if (left === null || right === null) return left === null && right === null;
      return left.val === right.val && rec(left.left, right.right) && rec(left.right, right.left);
  }
 
  return root ? rec(root.left, root.right) : true;
};