# Headshot [⬀](http://poj.org/problem?id=3869)

## Description

You have a revolver gun with a cylinder that has n chambers. Chambers are located in a circle on a cylinder. Each chamber can be empty or can contain a round. One chamber is aligned with the gun's barrel. When trigger of the gun is pulled, the gun's cylinder rotates, aligning the next chamber with the barrel, hammer strikes the round, making a shot by firing a bullet through the barrel. If the chamber is empty when the hammer strikes it, then there is no shot but just a "click".
You have found a use for this gun. You are playing Russian Roulette with your friend. Your friend loads rounds into some chambers, randomly rotates the cylinder, aligning a random chamber with a gun's barrel, puts the gun to his head and pulls the trigger. You hear "click" and nothing else - the chamber was empty and the gun did not shoot.
Now it is your turn to put the gun to your head and pull the trigger. You have a choice. You can either pull the trigger right away or you can randomly rotate the gun's cylinder and then pull the trigger. What should you choose to maximize the chances of your survival?

## Input

The input file contains a single line with a string of n digits `0` and `1` (`2 <= n <= 100`). This line of digits represents the pattern of rounds that were loaded into the gun's chambers. `0` represent an empty chamber, `1` represent a loaded one. In this representation, when cylinder rotates before a shot, the next chamber to the right gets aligned with the barrel for a shot. Since the chambers are actually located on a circle, the first chamber in this string follows the last one. There is at least one `0` in this string.

## Output

Write to the output file one of the following words (without quotes):

- `SHOOT` - if pulling the trigger right away makes you less likely to be actually shot in the head with the bullet (more likely that the chamber will be empty).
- `ROTATE` - if randomly rotating the cylinder before pulling the trigger makes you less likely to be actually shot in the head with the bullet (more likely that the chamber will be empty).
- `EQUAL` - if both of the above choices are equal in terms of probability of being shot.

### Sample Input #1:
```
0011
```

### Sample Output #1:
```
EQUAL
```

### Sample Input #2:
```
0111
```

### Sample Output #2:
```
ROTATE
```

### Sample Input #3:
```
000111
```

### Sample Output #3:
```
SHOOT
```

## Source

Northeastern Europe 2009
