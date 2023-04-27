# Virus Replication [⬀](https://www.e-olymp.com/en/problems/6253)

Some viruses replicate by replacing a piece of DNA in a living cell with a piece of DNA that the virus carries with it. This makes the cell start to produce viruses identical to the original one that infected the cell. A group of biologists is interested in knowing how much DNA a certain virus inserts into the host genome. To find this out they have sequenced the full genome of a healthy cell as well as that of an identical cell infected by a virus.

The genome turned out to be pretty big, so now they need your help in the data processing step. Given the DNA sequence before and after the virus infection, determine the length of the smallest single, consecutive piece of DNA that can have been inserted into the first sequence to turn it into the second one. A single, consecutive piece of DNA might also have been removed from the same position in the sequence as DNA was inserted. Small changes in the DNA can have large effects, so the virus might insert only a few letters, or even nothing at all.

## Input
Consists of two lines containing the DNA sequence before and after virus infection respectively. A DNA sequence is given as a string containing between 1 and 105 upper-case letters from the alphabet {A, G, C, T}.

## Output
Output one integer, the minimum length of DNA inserted by the virus.

## Input example #1
```
AAAAA
AGCGAA
```

## Output example #1
```
3
```

## Input example #2
```
GTTTGACACACATT
GTTTGACCACAT
```

## Output example #2
```
4
```
