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
 * @return {TreeNode[]}
 */
 var findDuplicateSubtrees = function(root) {
  let h = {};
  let result = [];
  let rec = (root) => {
      if (!root) return '_';
      let left = rec(root.left), right = rec(root.right);
      let code = '(' + root.val + ','+ left + ',' + right + ')';
      if (h[code] === 1) {
          result.push(root);
          h[code] = 2;
      } else if (h[code] === undefined) {
          h[code] = 1;
      }
      return code;
  }
  rec(root);
  return result;
};
