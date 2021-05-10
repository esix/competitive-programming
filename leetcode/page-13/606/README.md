# [606. Construct String from Binary Tree](https://leetcode.com/problems/construct-string-from-binary-tree/)

Given the `root` of a binary tree, construct a string consists of parenthesis and integers from a binary tree with the preorder traversing way, and return it.

Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.


### Example 1:
![cons1-tree.jpg](cons1-tree.jpg)
```
Input: root = [1,2,3,4]
Output: "1(2(4))(3)"
Explanation: Originallay it needs to be "1(2(4)())(3()())", but you need to omit all the unnecessary empty parenthesis pairs. And it will be "1(2(4))(3)"
```

### Example 2:
![cons2-tree.jpg](cons2-tree.jpg)
```
Input: root = [1,2,3,null,4]
Output: "1(2()(4))(3)"
Explanation: Almost the same as the first example, except we cannot omit the first parenthesis pair to break the one-to-one mapping relationship between the input and the output.
```

### Constraints:

- The number of nodes in the tree is in the range `[1, 10⁴]`.
- `-1000 <= Node.val <= 1000`