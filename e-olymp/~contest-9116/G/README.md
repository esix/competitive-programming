# [Portals](https://www.e-olymp.com/en/contests/9116/problems/79191)

Some planets of the galaxy, where Peter Pyatochkin recently moved, are connected with portals. If planets A and B are connected, it means that each planet has a special device - portal - for teleportation between them. The creature that enters the portal on the planet A, instantly appears on the planet B and vice versa.

The same portal can not be used to teleport to different planets. If some pair of planets are not connected yet, they can be united, but a new portal must be built on each planet. Building portals requires considerable outlay and can cost differently on different planets.

We say that there is a teleport way between two planets, if you can get from one planet to another, teleporting one or more times (using intermediate planets). Unfortunately, there is no teleportation way between any two planets.

You are given the communication scheme among the planets and the cost of the portal on each planet. Determine the lowest amount of money you need to spend to ensure the existence of a teleportation path between each pair of planets in the galaxy.

## Input

The first line contains two integers: the number of planets in the galaxy n (n ≤ 1000) and the number of planets pairs m, directly connected with portals.

n positive integers p₁, p₂, …, pₙ are given iₙ the second line - the cost of building a new portal, respectively on the first, on the second, ...., on the n-th planet. None of the costs exceed 10⁶.

Each of the next m lines contains two positive integers aᵢ and bᵢ (1 ≤ aᵢ < bᵢ ≤ n, 1 ≤ i ≤ m) that describe the pair of connected planets. Each pair is given in input only one time.

## Output

Print the smallest amount of money that should be spent on the portals construction on some planets so that there would be the teleportation path between each pair of planets in the galaxy.


_Time limit 1 second_

_Memory limit 256 MiB_

## Input example #1
```
4 2
7 4 7 3
1 3
2 4
```

## Output example #1
```
10
```

_Example description: Its possible to connect the forth planet either with first, or with third, satisfying the problem conditions and spending 3 + 7 = 10 money. To use less money is impossible_

