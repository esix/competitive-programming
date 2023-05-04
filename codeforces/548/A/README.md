# Mike and Fax [⬀](https://codeforces.com/problemset/problem/548/A)


While Mike was walking in the subway, all the stuff in his back-bag dropped on the ground. There were several fax messages among them. He concatenated these strings in some order and now he has string `s`.

![](548-a.png)

He is not sure if this is his own back-bag or someone else's. He remembered that there were exactly `k` messages in his own bag, each was a *palindrome* string and all those strings had the same length.

He asked you to help him and tell him if he has worn his own back-bag. Check if the given string `s` is a concatenation of `k` *palindromes* of the same length.

## Input

The first line of input contains string `s` containing lowercase English letters (`1 ≤ |s| ≤ 1000`).

The second line contains integer `k` (`1 ≤ k ≤ 1000`).

## Output

Print "`YES`"(without quotes) if he has worn his own back-bag or "`NO`"(without quotes) otherwise.

## Examples

### input
```
saba
2
```

### output
```
NO
```

### input
```
saddastavvat
2
```

### output
```
YES
```

## Note

*Palindrome* is a string reading the same forward and backward.

In the second sample, the faxes in his back-bag can be "`saddas`" and "`tavvat`".
