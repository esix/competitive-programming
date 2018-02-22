# [Assignments](https://www.e-olymp.com/en/problems/6961)

When Starfleet headquarters gets a request for an exploration expedition, they need to determine which ship from those currently docked in the docking bay to send. They decide to send whichever ship is currently able to make the expedition based on how much fuel is currently stored on the ship as well as how long it will take the ship to arrive at the expected destination.

Due to the age and current maintenance of the ships, each ship travels at a different top speed and has a different fuel consumption rate. Each ship reaches its top speed instantaneously.

## Input
The first line contains the number of test cases t (1 ≤ t ≤ 50). Each test case begins with a line with two space-separated integers n and d, where n (1 ≤ n ≤ 100) denotes the number of ships in the docking bay and d (1 ≤ d ≤ 10⁶) denotes the distance in light-years to the expedition site. Next follow n lines with three space-separated integers vᵢ, fᵢ, and cᵢ, where vᵢ (1 ≤ vᵢ ≤ 1000) denotes the top speed of ship i in light-years per hour, fᵢ (1 ≤ fᵢ ≤ 1000) denotes the fuel on ship i in kilos of deuterium, and cᵢ (1 ≤ cᵢ ≤ 1000) denotes the fuel consumption of ship i in kilos of deuterium per hour.

## Output
For each test case, print a single integer on its own line denoting the number of ships capable of reaching the expedition site. Be careful with integer division!

## Input example #1
```
2
3 100
52 75 10
88 13 44
56 9 5
2 920368
950 950 1
943 976 1
```

## Output example #1
```
2
1
```
