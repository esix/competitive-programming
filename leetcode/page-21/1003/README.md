# [Check If Word Is Valid After Substitutions](https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/)

Given a string `s`, determine if it is **valid**.

A string `s` is **valid** if, starting with an empty string `t = ""`, you can **transform** `t` **into** `s` after performing the following operation **any number of times**:

- Insert string `"abc"` into any position in `t`. More formally, `t` becomes <code>t<sub>left</sub> + "abc" + t<sub>right</sub></code>, where <code>t == t<sub>left</sub> + t<sub>right</sub></code>. Note that <code>t<sub>left</sub></code> and <code>t<sub>right</sub></code> may be empty.
Return `true` *if `s` is a **valid** string, otherwise, return `false`*.

 
### Example 1:
<pre>
<b>Input:</b> s = "aabcbc"
<b>Output:</b> true
<b>Explanation:</b>
"" -> "abc" -> "aabcbc"
Thus, "aabcbc" is valid.
</pre>

### Example 2:
<pre>
<b>Input:</b> s = "abcabcababcc"
<b>Output:</b> true
<b>Explanation:</b>
"" -> "abc" -> "abcabc" -> "abcabcabc" -> "abcabcababcc"
Thus, "abcabcababcc" is valid.
</pre>

### Example 3:
<pre>
<b>Input:</b> s = "abccba"
<b>Output:</b> false
<b>Explanation:</b> It is impossible to get "abccba" using the operation.
</pre>

### Example 4:
<pre>
<b>Input:</b> s = "cababc"
<b>Output:</b> false
<b>Explanation:</b> It is impossible to get "cababc" using the operation.
</pre>

### Constraints:

- `1 <= s.length <= 2 * 10⁴`
- `s` consists of letters `'a'`, `'b'`, and `'c'`