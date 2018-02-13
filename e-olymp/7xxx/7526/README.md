# [Server](https://www.e-olymp.com/en/problems/7526)
You are in charge of a server that needs to run some submitted tasks on a first-come, first-served basis. Each day, you can dedicate the server to run these tasks for at most t minutes. Given the time each task takes, you want to know how many of them will be finished today.

Consider the following example. Assume t = 180 and the tasks take 45, 30, 55, 20, 80 and 20 minutes (in order they are submitted). Then, only four tasks can be completed. The first four tasks can be completed because they take 150 minutes, but not the first five, because they take 230 minutes which is greater than 180. Notice that although there is enough time to perform the sixth task (which takes 20 minutes) after completing the fourth task, you cannot do that because the fifth task is not done yet.

## Input
The first line contains two integers n (1 ≤ n ≤ 50) and t (1 ≤ t ≤ 500) where n is the number of tasks. The next line contains n positive integers no more than 100 indicating how long each task takes in order they are submitted.

## Output
Display the number of tasks that can be completed in t minutes on a first-come, first-served basis.

## Input example #1
```
6 180
45 30 55 20 80 20
```

## Output example #1
```
4
```

## Input example #2
```
10 60
20 7 10 8 10 27 2 3 10 5
```

## Output example #2
```
5
```
