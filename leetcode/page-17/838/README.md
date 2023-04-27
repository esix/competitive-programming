# Push Dominoes [⬀](https://leetcode.com/problems/push-dominoes/)

There are `n` dominoes in a line, and we place each domino vertically upright. In the beginning, we simultaneously push some of the dominoes either to the left or to the right.

After each second, each domino that is falling to the left pushes the adjacent domino on the left. Similarly, the dominoes falling to the right push their adjacent dominoes standing on the right.

When a vertical domino has dominoes falling on it from both sides, it stays still due to the balance of the forces.

For the purposes of this question, we will consider that a falling domino expends no additional force to a falling or already fallen domino.

You are given a string `dominoes` representing the initial state where:

- `dominoes[i] = 'L'`, if the `iᵗʰ` domino has been pushed to the left,
- `dominoes[i] = 'R'`, if the `iᵗʰ` domino has been pushed to the right, and
- `dominoes[i] = '.'`, if the `iᵗʰ` domino has not been pushed.

Return *a string representing the final state*.


### Example 1:
<pre>
<b>Input:</b> dominoes = "RR.L"
<b>Output:</b> "RR.L"
<b>Explanation:</b> The first domino expends no additional force on the second domino.
</pre>

### Example 2:
![domino.png](domino.png)
<pre>
<b>Input:</b> dominoes = ".L.R...LR..L.."
<b>Output:</b> "LL.RR.LLRRLL.."
</pre>

### Constraints:

- `n == dominoes.length`
- `1 <= n <= 10⁵`
- `dominoes[i]` is either `'L'`, `'R'`, or `'.'`.
