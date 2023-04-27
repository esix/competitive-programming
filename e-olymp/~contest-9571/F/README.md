# Bus [⬀](https://www.e-olymp.com/en/contests/9571/problems/83972)
Every morning Anton goes to work by bus.

The bus route includes n stops, numbered from 1 to n in this order. The bus passes from each stop to the next one minute, and its parking time can be neglected. Anton sits at the first stop and goes out on the last.

The bus has m seats, arranged in one row and numbered from 1 to m, the nearest seat to the entrance is the number 1, and the furthest is the number m. Each seat can be taken only by one passenger, and only one passenger can stand near each seat. When a person enters the bus, he sits on the free seat nearest to the entrance. If they are all busy, he is looking for the seat closest to the entrance, next to which no one is standing, and stands over the soul of the person sitting there. If there is no such place, he leaves the bus.

Each passenger remains in his place until arriving to the required stop. A standing passenger remains standing, even if some seat is released.

At each stop all the passengers who were going to get off at this stop first come out of the bus, and only then comes into the bus the new passengers.

Anton entered the bus first, he can sit on any seat and stay on it until the end of the trip. He knows very well who else will go on the bus, about each passenger Anton knows at what stop he will enter the bus and when exit. Help Anton to choose such place that during the trip the passengers will stand over his soul as little as possible.

## Input
The first line contains three integers n, m и k - number of stops, number of seats in the bus and number of passengers except Anton (2 ≤ n ≤ 10⁹, 1 ≤ m ≤ 2 * 10⁵, 0 ≤ k ≤ 2 * 10⁵).

Each of the next k lines contains 2 integers aᵢ и bᵢ, meaning that i-th passenger wants to enter at the aᵢ-th stop and to exit at the bᵢ-th stop (1 ≤ aᵢ < bᵢ ≤ n).

If several people come to the bus at one stop, they go in the order as they are listed in the input data.

## Output
Print two numbers in one line - the minimum total time in minutes, during which over Anton's soul somebody will stand, and the number of the place where Anton need to sit down for this. If there are several such places, print the seat nearest to the entrance.

## Input example #1
```
10 2 3
1 10
3 9
7 10
```

## Output example #1
```
3 2
```
