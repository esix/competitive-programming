# Prediction Contest [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1868)

At the ICPC World Finals, four sets of gold medals, four sets of silver medals, and four sets of bronze medals are awarded; thus, top twelve teams win medals.

There were few days left before the World Finals in Orlando. Veterans of collegiate programming contests from Ural State University were hotly debating chances of the teams for medals at the forthcoming contest. Vadik suggested that every person who wanted to make a prediction for the results of the finals should pool five dollars and state several guesses of the form “The team of university `X` will win a medal of type `Y`.” The veterans who made the maximum number of true guesses would share the pooled money between them.

But the veterans refused saying that the results of the finals are always very difficult to predict and nobody wanted to lose five dollars. Then Vadik changed the conditions of the prediction contest. He said that the participants didn't have to pay, but everybody who made the maximum number of true predictions would receive five dollars from Vadik. The veterans agreed to these conditions, and each of them stated several predictions about which team would win which medal.

Given the result of the World Finals and all the predictions made, find the amount of money that Vadik had to pay to the winners of the competition.

## Input

In the first twelve lines you are given the names of the universities winning the medals of the World Finals. The universities are listed in the order from the first place to the twelfth place.

In the following line you are given the number `n` of participants of the prediction contest (`1 ≤ n ≤ 100`). Then go `n` blocks containing the veterans' predictions. The `i`th block starts with the number of predictions `kᵢ` made by the `i`th participant. The predictions are given in the following `kᵢ` lines, each prediction has the form `<name_of_university> : <medal>`. Here, `<medal>` is the word “`gold`”, “`silver`”, or “`bronze`”. The predictions of each participant are consistent: no university can win more than one medal and the total number of medals of each kind is at most four.

The names of the universities consist of uppercase and lowercase English letters, underscore characters, dots, and commas. The length of each name is in the range from one to thirty symbols.

## Output

Output the amount of money that Vadik paid according to the result of the prediction contest. If more than one participant made the maximum number of true predictions, Vadik paid five dollars to each of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
Zhejiang_U
U_of_Michigan_at_Ann_Arbor
Tsinghua_U
St._Petersburg_SU
Nizhny_Novgorod_SU
Saratov_SU
Friedrich_Alexander_U
Donetsk_National_U
Jagiellonian_U_in_Krakow
Moscow_SU
Ural_SU
U_of_Waterloo
3
6
Moscow_SU : gold
St._Petersburg_SU_of_ITMO : gold
Warsaw_U : gold
Tsinghua_U : gold
Nizhny_Novgorod_SU : silver
Saratov_SU : silver
6
Warsaw_U : gold
Saratov_SU : gold
Tsinghua_U : gold
Donetsk_National_U : silver
St._Petersburg_SU_of_ITMO : silver
Ural_SU : bronze
6
Zhejiang_U : gold
Tsinghua_U : gold
Shanghai_Jiao_Tong_U : gold
Fudan_U : gold
Moscow_SU : silver
Nizhny_Novgorod_SU : silver
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
15
</pre>
</td>
</tr>
</table>

