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
 * @return {string}
 */
 var tree2str = (root) => root.val + (root.left ? '(' + tree2str(root.left) + ')' : root.right ? '()' : '') + (root.right ? '(' + tree2str(root.right) + ')' : '');
