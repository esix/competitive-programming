# [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the *definition of LCA on Wikipedia*: “The lowest common ancestor is defined between two nodes `p` and `q` as the lowest node in `T` that has both `p` and `q` as descendants (where we allow **a node to be a descendant of itself**).”


### Example 1:

![binarytree.png](binarytree.png)

<pre>
<b>Input:</b> root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
<b>Output:</b> 3
<b>Explanation:</b> The LCA of nodes 5 and 1 is 3.
</pre>

### Example 2:

![binarytree.png](binarytree.png)

<pre>
<b>Input:</b> root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
<b>Output:</b> 5
<b>Explanation:</b> The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.
</pre>

### Example 3:
<pre>
<b>Input:</b> root = [1,2], p = 1, q = 2
<b>Output:</b> 1
</pre>

### Constraints:

- The number of nodes in the tree is in the range `[2, 10⁵]`.
- `-10⁹ <= Node.val <= 10⁹`
- All `Node.val` are unique.
- `p != q`
- `p` and `q` will exist in the tree.
