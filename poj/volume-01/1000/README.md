# A+B Problem [⬀](http://poj.org/problem?id=1000)

## Description

Calculate a+b

## Input

Two integer a,b (0<=a,b<=10)

## Output

Output a+b

## Sample Input
```
1 2
```

## Sample Output

3

## Hint

Q: Where are the input and the output? 

A: Your program shall always read input from stdin (Standard Input) and write output to stdout (Standard Output). For example, you can use 'scanf' in C or 'cin' in C++ to read from stdin, and use 'printf' in C or 'cout' in C++ to write to stdout. 

You shall not output any extra data to standard output other than that required by the problem, otherwise you will get a "Wrong Answer". 

User programs are not allowed to open and read from/write to files. You will get a "Runtime Error" or a "Wrong Answer"if you try to do so. 

Here is a sample solution to problem 1000 using C++/G++: 

```
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << a+b << endl;
    return 0;
}
```

It's important that the return type of main() must be int when you use G++/GCC,or you may get compile error. 

Here is a sample solution to problem 1000 using C/GCC: 

```
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d\n",a+b);
    return 0;
}
```

Here is a sample solution to problem 1000 using Pascal: 

```
program p1000(Input,Output);

var
  a,b:Integer;
begin
   Readln(a,b);
   Writeln(a+b);
end.
```

Here is a sample solution to problem 1000 using Java: 

Now java compiler is jdk 1.5, next is program for 1000 
```
import java.io.*;
import java.util.*;
public class Main
{
            public static void main(String args[]) throws Exception
            {
                    Scanner cin=new Scanner(System.in);
                    int a=cin.nextInt(),b=cin.nextInt();
                    System.out.println(a+b);
            }
}
```

Old program for jdk 1.4 

```
import java.io.*;
import java.util.*;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        BufferedReader stdin = 
            new BufferedReader(
                new InputStreamReader(System.in));

        String line = stdin.readLine();
        StringTokenizer st = new StringTokenizer(line);
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        System.out.println(a+b);
    }
}
```

Here is a sample solution to problem 1000 using Fortran: 

```
	PROGRAM P1000
		IMPLICIT NONE
		INTEGER :: A, B
		READ(*,*) A, B
		WRITE(*, "(I0)") A + B
	END PROGRAM P1000
```