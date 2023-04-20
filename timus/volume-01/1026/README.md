# Questions and Answers [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1026)


## Background

The database of the Pentagon contains a top-secret information. We don’t know what the information is — you know, it’s top-secret, — but we know the format of its representation. It is extremely simple. We don’t know why, but all the data is coded by integers from 1 up to 5000. The size of the main base (we’ll denote it be `N`) is rather big — it may contain up to 100 000 those numbers. The database is to process quickly every query. The most often query is: "Which element is `i`-th by its value?"— with `i` being an integer in a range from `1` to `N`.

## Problem

Your program is to play a role of a controller of the database. In the other words, it should be able to process quickly queries like this.

## Input

Input of the problem consists of two parts. At first, a database is written, and then there’s a sequence of queries. The format of database is very simple: in the first line there’s a number `N`, in the next `N` lines there are numbers of the database one in each line in an arbitrary order. A sequence of queries is written simply as well: in the first line of the sequence a number of queries `K` (`1 ≤ K ≤ 100`) is written, and in the next `K` lines there are queries one in each line. The query "Which element is `i`-th by its value?" is coded by the number `i`. A database is separated from a sequence of queries by the string of three symbols "#".

## Output

The output should consist of `K` lines. In each line there should be an answer to the corresponding query. The answer to the query "`i`" is an element from the database, which is `i`-th by its value (in the order from the least up to the greatest element).

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
5
7
121
123
7
121
###
4
3
3
2
5
</pre>
</td>
<td style="vertical-align: top">
<pre>
121
121
7
123
</pre>
</td>
</tr>
</table>
