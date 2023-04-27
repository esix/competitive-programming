# Lowest Common Ancestor of a Binary Search Tree [⬀](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)

Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

According to the `definition of LCA on Wikipedia`: “The lowest common ancestor is defined between two nodes `p` and `q` as the lowest node in `T` that has both `p` and `q` as descendants (where we allow **a node to be a descendant of itself**).”
 

### Example 1:
![binarysearchtree_improved.png](binarysearchtree_improved.png)

<pre>
<b>Input:</b> root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
<b>Output:</b> 6
<b>Explanation:</b> The LCA of nodes 2 and 8 is 6.
</pre>

### Example 2:
![binarysearchtree_improved.png](binarysearchtree_improved.png)
<pre>
<b>Input:</b> root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
<b>Output:</b> 2
<b>Explanation:</b> The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
</pre>

Example 3:
<pre>
<b>Input:</b> root = [2,1], p = 2, q = 1
<b>Output:</b> 2
</pre>

### Constraints:

- The number of nodes in the tree is in the range `[2, 10⁵]`.
- `-10⁹ <= Node.val <= 10⁹`
- All `Node.val` are **unique**.
- `p != q`
- `p` and `q` will exist in the BST.
