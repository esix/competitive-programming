# [Garage](https://www.e-olymp.com/en/problems/291)
A parking garage has n parking spaces, numbered from 1 to n inclusive. The garage opens empty each morning and operates in the following way throughout the day. Whenever a car arrives at the garage, the attendants check whether there are any parking spaces available. If there are none, then the car waits at the entrance until a parking space is released. If a parking space is available, or as soon as one becomes available, the car is parked in the available parking space. If there is more than one available parking space, the car will be parked at the space with the smallest number. If more cars arrive while some car is waiting, they all line up in a queue at the entrance, in the order in which they arrived. Then, when a parking space becomes available, the first car in the queue (i.e., the one that arrived the earliest) is parked there.

The cost of parking in dollars is the weight of the car in kilograms multiplied by the specific rate of its parking space. The cost does not depend on how long a car stays in the garage.

The garage operator knows that today there will be m cars coming and he knows the order of their arrivals and departures. Help him calculate how many dollars his revenue is going to be today.

Write a program that, given the specific rates of the parking spaces, the weights of the cars and the order in which the cars arrive and depart, determines the total revenue of the garage in dollars.

## Input

The first line contains two integers - the number of parking spaces n (1 ≤ n ≤ 100) and the number of cars m (1 ≤ m ≤ 2,000), separated by a space.

The next n lines describe the rates of the parking spaces. The s-th of these lines contains a single integer rs (1 ≤ rs ≤ 100), the rate of parking space number s in dollars per kilogram.

The next m lines describe the weights of the cars. The cars are numbered from 1 to m inclusive in no particular order. The k-th of these m lines contains a single integer wk (1 ≤ wk ≤ 10,000), the weight of car k in kilograms.

The next 2m lines describe the arrivals and departures of all cars in chronological order. A positive integer i indicates that car number i arrives at the garage. A negative integer -i indicates that car number i departs from the garage. No car will depart from the garage before it has arrived, and all cars from 1 to m inclusive will appear exactly twice in this sequence, once arriving and once departing. Moreover, no car will depart from the garage before it has parked (i.e., no car will leave while waiting on the queue).

## Output

One integer - the total number of dollars that will be earned by the garage operator today.

## Input example #1
```
3 4
2
3
5
200
100
300
800
3
2
-3
1
4
-4
-2
-1
```

## Output example #1
```
5300
```

## Input example #4
```
4 4
8
8
2
2
8
9
9
6
2
4
1
3
-3
-4
-2
-1
```

## Output example #4
```
154
```
