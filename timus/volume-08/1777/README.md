# Anindilyakwa [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1777)

The language of Australian aborigines anindilyakwa has no numerals. No anindilyakwa can say: “I've hooked eight fishes”. Instead, he says: “I've hooked as many fishes as many stones are in this pile”.

Professor Brian Butterworth found a meadow with three piles of stones. He decided to determine whether aborigines can count. Professor asked one of the aborigines to point at two piles with the minimal difference of numbers of stones in them and tell what this difference is. The aborigine pointed correctly! He was unable to express the difference with words, so he went to a shore and returned with a pile of the corresponding number of stones.

Professor decided to continue his experiments with other aborigines, until one of them points at two piles with equal number of stones. All piles that aborigines bring from the shore are left at the meadow. So, the second aborigine will have to deal with one more pile, the one brought by the first aborigine.

## Input

The only input line contains space-separated pairwise distinct integers `x₁`, `x₂` and `x₃` (`1 ≤ x₁, x₂, x₃ ≤ 10¹⁸`), which are the numbers of stones in piles that were lying on the meadow at the moment professor Butterworth asked the first aborigine.

## Output

Output the number of aborigines that will have to answer a stupid question by professor.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
11 5 9
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
</pre>
</td>
</tr>
</table>

## Notes

The first aborigine will point at piles of 11 and 9 stones and will bring a pile of two stones. The second aborigine will point at the same piles and will bring another pile of two stones. The third aborigine will point at two piles of two stones, and the experiments will be over.
