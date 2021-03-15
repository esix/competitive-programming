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
 * @param {number} k
 * @return {boolean}
 */
 var findTarget = function(ROOT, k) {
  const getItem = (n) => {
      const rec = (root, n) => {
          if (!root) return false;
          else if (n === root.val) return true;
          else if (n < root.val) return rec(root.left, n);
          else return rec(root.right, n);
      }
      return rec(ROOT, n);
  };
  
  let iterate = (root) => {
      if (!root) return false;
      return (2 * root.val !== k && getItem(k - root.val)) ||
             iterate(root.left) ||
             iterate(root.right);
  }

  return iterate(ROOT);
};
