/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
 var lowestCommonAncestor = function(root, p, q) {
  let parents = new Map(), levels = new Map();
  let makeParentsAndLevel = (root, level) => {
      if (!root) return;
      levels.set(root, level);
      if (root.left) parents.set(root.left, root);
      if (root.right) parents.set(root.right, root);
      makeParentsAndLevel(root.left, level + 1);
      makeParentsAndLevel(root.right, level + 1);
  };
  makeParentsAndLevel(root, 0);
  
  let l = Math.min(levels.get(p), levels.get(q));
  while (levels.get(p) > l) p = parents.get(p);
  while (levels.get(q) > l) q = parents.get(q);

  while (p !== q) {
      p = parents.get(p);
      q = parents.get(q);
  }
  return p;
};
