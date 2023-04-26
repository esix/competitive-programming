# Strange Procedure [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1214)

It's often happens in programming that one has to test and debug an existing program code. Imagine that your colleague has passed you fragment of program code of his because he is to work at another program.

Here follows the fragment of the program code — a procedure with two parameters:

### Pascal

```
procedure P(x, y: integer);
var
    i, j: integer;
begin
    if (x > 0) and (y > 0) then
    begin
        for i := 1 to x + y do
        begin
            y := x * x + y;
            x := x * x + y;
            y := round(sqrt(x + (y / abs(y)) * (-abs(y))));
            for j := 1 to 2 * y do
                x := x - y;
        end;
    end;
    writeln(x, ' ', y);
end;
``` 

### C++

```
void P(int x, int y)
{
    if (x > 0 && y > 0)
    {
        for (int i = 0; i < x + y; i++)
        {
            y = x * x + y;
            x = x * x + y;
            y = sqrt(x + y / abs(y) * -abs(y));
            for (int j = 0; j < 2 * y; j++)
                x -= y;
        }
    }
    printf("%d %d\n", x, y);
}
```

### Python

```
def P(x: int, y: int):
    if x > 0 and y > 0:
        for i in range(x + y):
            y = x * x + y
            x = x * x + y
            y = math.floor(math.sqrt(x + y / abs(y) * -abs(y)))
            for j in range(2 * y):
                x -= y
    print(x, y)
```

Your task is unusual: in order to debug the procedure it's necessary to work out a program that would restore input parameters given output data from console. It's guaranteed that no variable has left its type during the processing of the procedure.

### Input

The only line contains integers `x` and `y`, those are printed to console at the end of the procedure (`−32000 ≤ x, y ≤ 32000`).

### Output

Output integers `x` and `y` that were given to the procedure as input parameters.


## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
1 1
</pre>
</td>
<td style="vertical-align: top">
<pre>
1 1
</pre>
</td>
</tr>
</table>
