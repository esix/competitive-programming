# Parking [⬀](https://www.e-olymp.com/en/problems/504)
You want to park the car guests who have come to the party, on the street. According to the rules the cars cannot park:

- In front of the private departure;
- At the bus stop and less than 10 meters before it;
- At the pedestrian crossing, and less than 5 meters before him or after him.

You made plans for the surrounding streets, smashing them into sections the length of 5 meters (this is the minimum length for parking). Land with departure on the plane is denoted by 'D', bus stops - 'B', transitions - 'S', others - '-'. Write a program that for each street will determine the number of parking spaces.

## Input
The first line contains the number of streets n (1 ≤ n ≤ 100). It is followed by n lines containing street maps, each line has a length of 1 to 50 characters long and consist only of characters 'D', 'B', 'S' and '-'.

## Output
For each street plan print the number of parking places.

## Input example #1
```
3
---B--S-D--S--
DDBDDBDDBDD
--S--S--S--S--
```

## Output example #1
```
4
0
2
```
