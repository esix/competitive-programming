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
 * @return {number}
 */
 var deepestLeavesSum = function(root) {
  const getDepth = (root) => 1 + Math.max(root.left ? getDepth(root.left) : 0, root.right ? getDepth(root.right) : 0);
  const DEPTH = getDepth(root);
  const countSumm = (root, depth) => {
      if (depth === DEPTH) return root.val;
      return (root.left ? countSumm(root.left, depth + 1) : 0) + (root.right ? countSumm(root.right, depth + 1) : 0);
  }
  return countSumm(root, 1);
};
