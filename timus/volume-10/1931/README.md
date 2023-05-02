# Excellent Team [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1931)

*Gibbs: Next!*

*First Pirate: My wife ran off with my dog and I'm drunk for a month.*

*Gibbs: Perfect. Next!*

*Second Pirate: Me have one arm and a bum leg.*

*Gibbs: It's the crow's nest for you. Next!*

In Tortuga the Captain Jack Sparrow and Will Turner set up an excellent team. And now Jack wants to elect a captain's mate — the most worthy pirate in the new crew, who has fewer disadvantages and can be a role model for the rest.

Without thinking a lot Jack decided to use the following uncomplicated plan to choose the best pirate of the crew. Firstly, he ranks `n` contenders in one long row, beckons the first one and this first pirate is a current contender to be the mate. Then Jack walks along the row and stares at everybody one by one. He compares the regular pirate with the current contender and if he sees that the regular pirate has fewer disadvantages, then he changes the current contendor to the regular pirate. In the end of this process the new mate will stand near Jack.

Will knows about Jack’s plan and wants to count what pirate will have most comparisons while Jack elects. Let’s help Will with his calculations.

## Input

The first line contains an integer `n` that is the number of pirates in the crew (`1 ≤ n ≤ 10⁵`). Next line contains `n` integers: `a₁`, `a₂`, …, `aₙ`, where `aᵢ` is the number of disadvantages of `i`-th contender in Jack's opinion (`1 ≤ aᵢ ≤ 10⁹`). The pirates are numbered in the way they stood in the row in the beginning of the elections. It is guaranteed that the numbers of disadvantages, which the pirates have, are pairwise different.

## Output

Output the number of a pirate who was compared with others maximal number of times. If there are several such pirates, you can output any of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
6
2 5 3 4 1 9
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
1
</pre>
</td>
</tr>
</table>

