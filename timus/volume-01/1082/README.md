# [Gaby Ivanushka](https://acm.timus.ru/problem.aspx?space=1&num=1082)

Once upon a time there lived a tsar that has a daughter — Vasilisa the Beautiful. There were many of the young men that wanted to marry her but she repelled all suitors. The tsar was tired of her jigs, he got angry and issued an order: "The first who solves my puzzle, will marry Vasilisa!" Ivanushka decided to try his fortune. He came to the tsar and the tsar told him: "This is a program for you. Input N numbers and the program will tell you who you should marry. I give you a day to think." Ivanuska looked at the program and got upset: there were unknown letters, omnifarious symbols. The time passed. Ivanushka has thought out nothing.

The program was as follows.

### C++
```
#include <cstdio>

const int N = ...;

int A[N];

int Q(int l, int r)
{
    if (l >= r)
        return 0;

    int m;
    int c = 0;
    int x = A[l];
    int i = l - 1;
    int j = r + 1;
    while (true)
    {
        do
        {
            --j;
            ++c;
        }
        while (A[j] > x);

        do
        {
            ++i;
            ++c;
        }
        while (A[i] < x);

        if (i < j)
        {
            int t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
        else
        {
            m = j;
            break;
        }
    }

    return c + Q(l, m) + Q(m + 1, r);
}

int main()
{
    for (int i = 0; i < N; ++i)
        scanf("%d", &A[i]);

    if (Q(0, N - 1) == (N * N + 3 * N - 4) / 2)
        printf("Vasilisa the Beautiful\n");
    else
        printf("Koschei the Immortal\n");
    return 0;
}
```

### Pascal

```
const
    N = ...;

var
    A: array [1..N] of integer;

function Q(l, r: integer): integer;
var
    m, c: integer;
    i, j, t, x: integer;
begin
    if l >= r then
        exit;
    
    c := 0;
    x := A[l];
    i := l - 1;
    j := r + 1;
    while true do
    begin
        repeat
            dec(j);
            inc(c)
        until A[j] <= x;
        
        repeat
            inc(i);
            inc(c)
        until A[i] >= x;
        
        if i < j then
        begin
            t := A[i];
            A[i] := A[j];
            A[j] := t
        end
        else 
        begin
            m := j;
            break
        end
    end;        
    
    Q := c + Q(l, m) + Q(m + 1, r)
end;

var
    i: integer;

begin
    for i := 1 to N do 
        read(A[i]);
    
    if Q(1, N) = (N * N + 3 * N - 4) div 2 then
        writeln('Vasilisa the Beautiful')
    else 
        writeln('Koschei the Immortal')
end.
```

### Python

```
def Q(l: int, r: int) -> int:
    if l >= r:
        return 0

    c = 0
    x = A[l]
    i = l - 1
    j = r + 1
    while True:
        while True:
            j -= 1
            c += 1
            if A[j] <= x:
                break

        while True:
            i += 1
            c += 1
            if A[i] >= x:
                break

        if i < j:
            A[i], A[j] = A[j], A[i]
        else:
            m = j
            break

    return c + Q(l, m) + Q(m + 1, r)


N = ...
A = [int(x) for x in input().split()][0:N]

if Q(0, N - 1) == (N * N + 3 * N - 4) / 2:
    print('Vasilisa the Beautiful')
else:
    print('Koschei the Immortal')
```

Now you know this program. You may try to help Ivanushka.

## Input

The only line contains an integer `N` that is a value of constant from the tsar's program (`1 ≤ N ≤ 1000`).

## Output
Output `N` integers in range from `−10⁹` to `10⁹`. The tsar's program given those integers should output a message "Vasilisa the Beautiful". The integers should be separated with a space. If several variants are possible choose any you like.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3
</pre>
</td>
<td style="vertical-align: top">
<pre>
3 7 19
</pre>
</td>
</tr>
</table>
