# [Money Matters](https://www.e-olymp.com/en/problems/543)


Our sad tale begins with a tight clique of friends. Together they went on a trip to the picturesque country of Molvania. During their stay, various events which are too horrible to mention occurred. The net result was that the last evening of the trip ended with a momentous exchange of "I never want to see you again!"s. A quick calculation tells you it may have been said almost 50 million times!

Back home in Scandinavia, our group of ex-friends realize that they haven't split the costs incurred during the trip evenly. Some people may be out several thousand crowns. Settling the debts turns out to be a bit more problematic than it ought to be, as many in the group no longer wish to speak to one another, and even less to give each other money.

Naturally, you want to help out, so you ask each person to tell you how much money she owes or is owed, and whom she is still friends with. Given this information, you're sure you can figure out if it's possible for everyone to get even, and with money only being given between persons who are still friends.


## Input

The first line contains two integers n (2 ≤ n ≤ 10000) and m (0 ≤ m ≤ 50000), the number of friends and the number of remaining friendships. Then n lines follow, each containing an integer o (-10000 ≤ o ≤ 10000) indicating how much each person owes (or is owed if o < 0). The sum of these values is zero. After this comes m lines giving the remaining friendships, each line containing two integers x,y (0 ≤ x < y ≤ n- 1) indicating that persons x and y are still friends.

## Output

Print a line saying "POSSIBLE" or "IMPOSSIBLE".

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example #1
```
5 3
100
-75
-25
-42
42
0 1
1 2
3 4
```

## Output example #1
```
POSSIBLE
```
