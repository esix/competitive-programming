# [Coverage](https://www.e-olymp.com/en/problems/8189)

A cellular provider has installed n towers to support their network. Each tower provides coverage in a 1 km radius, and no two towers are closer than 1 km to one another. The coverage region of this network is therefore the set of all points that are no more than 1 km away from at least one tower. The provider wants as much of this region as possible to be connected, in the sense that a user at any point within a connected subregion can travel to any other point within the connected subregion without having to exit the subregion. Their current installation of towers may or may not already form a single connected region, but they have the resources to build one more tower wherever they want, including within 1 km of an existing tower.

Given that the provider is able to build one more tower, what is the maximum number of towers (including the one just built) that can be included within a single connected subregion of coverage?

## Input

The first line consists of a single integer n (1 ≤ n ≤ 5000), denoting the number of existing towers. Next follow n lines each with 2 space-separated real numbers xᵢ, yᵢ (0 ≤ xᵢ, yᵢ ≤ 10⁵), denoting the location of tower i in km. It is guaranteed that the optimal number of towers will not change even if the coverage radius of all the towers is increased or decreased by one millimeter.

## Output

Print a single integer denoting the maximum number of towers that can be within a single connected subregion of the network after installing one additional tower.

_Time limit 1 second_

_Memory limit 128 MiB_

## Input example #1
```
5
1.0 1.0
3.1 1.0
1.0 3.1
3.1 3.1
4.2 3.1
```

## Output example #1
```
6
```

## Input example #2
```
5
1.0 1.0
3.1 1.0
1.0 3.1
3.1 3.1
10.0 10.0
```

## Output example #2
```
5
```
