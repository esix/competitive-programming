# [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)

You are given a string `s` consisting of lowercase English letters. A **duplicate removal** consists of choosing two **adjacent** and **equal** letters and removing them.

We repeatedly make **duplicate removals** on `s` until we no longer can.

Return *the final string after all such duplicate removals have been made*. It can be proven that the answer is **unique**.

Example 1:
<pre>
<b>Input:</b> s = "abbaca"
<b>Output:</b> "ca"
<b>Explanation: </b>
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
</pre>

### Example 2:
<pre>
<b>Input:</b> s = "azxxzy"
<b>Output:</b> "ay"
</pre>

### Constraints:

- `1 <= s.length <= 10⁵`
- `s` consists of lowercase English letters.
