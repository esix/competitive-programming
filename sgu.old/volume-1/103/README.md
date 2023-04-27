# Traffic Lights [⬀](http://acm.sgu.ru/problem.php?contest=0&problem=103)

_Time limit per test: 0.25 second(s)_

_Memory limit: 4096 kilobytes_

_input: standard_

_output: standard_

In the city of Dingilville the traffic is arranged in an unusual way. There are junctions and roads connecting the junctions. There is at most one road between any two different junctions. There is no road connecting a junction to itself. Travel time for a road is the same for both directions. At every junction there is a single traffic light that is either blue or purple at any moment. The color of each light alternates periodically: blue for certain duration and then purple for another duration. Traffic is permitted to travel down the road between any two junctions, if and only if the lights at both junctions are the same color at the moment of departing from one junction for the other. If a vehicle arrives at a junction just at the moment the lights switch it must consider the new colors of lights. Vehicles are allowed to wait at the junctions. You are given the city map which shows:
- the travel times for all roads (integers)
- the durations of the two colors at each junction (integers)
- and the initial color of the light and the remaining time (integer) for this color to change at each junction. 

Your task is to find a path which takes the minimum time from a given source junction to a given destination junction for a vehicle when the traffic starts. In case more than one such path exists you are required to report only one of them.

## Input
The first line contains two numbers: The id-number of the source junction and the id-number of the destination junction. The second line contains two numbers: N, M. The following N lines contain information on N junctions. The (i+2)'th line of the input file holds information about the junction i : Ci, riC, tiB, tiP where Ci is either B for blue or P for purple, indicating the initial color of the light at the junction i. Finally, the next M lines contain information on M roads. Each line is of the form: i, j, lij where i and j are the id-numbers of the junctions which are connected by this road. 2 ≤ N ≤ 300 where N is the number of junctions. The junctions are identified by integers 1 through N. These numbers are called id-numbers. 1 ≤ M ≤ 14000 where M is the number of roads. 1 ≤ lij ≤ 100 where lij is the time required to move from junction i to j using the road that connects i and j. 1 ≤ tiC ≤ 100 where tiC is the duration of the color c for the light at the junction i. The index c is either 'B' for blue or 'P' for purple. 1 ≤ riC ≤ tiC where riC is the remaining time for the initial color c at junction i. 

## Output
If a path exists:
- The first line will contain the time taken by a minimum-time path from the source junction to the destination junction.
- Second line will contain the list of junctions that construct the minimum-time path you have found. You have to write the junctions to the output file in the order of travelling. Therefore the first integer in this line must be the id-number of the source junction and the last one the id-number of the destination junction. 

If a path does not exist:
- A single line containing only the integer 0. 

## Example(s)
### sample input
```
1 4
4 5
B 2 16 99
P 6 32 13
P 2 87 4
P 38 96 49
1 2 4
1 3 40
2 3 75
2 4 76
3 4 77
```

### sample output
```
127
1 2 4
```

Online Contester Team © 2002 - 2010. All rights reserved.