# [The Directors’ Visitors](https://www.e-olymp.com/en/problems/66)

The secretary of school Martha Georgiyivna began her working day with pretension to director every day:

Here you, Ivan Ivan, bought to the deputy from educational part the program for scheduling already. And what do I have to do? I need to make the graph of visitors according to Your needs in fact. And you didn’t buy the program for planning of the work of administration for me.
Please try to help secretary in her work. You have to organize the graphic of the visitors on the basis of wishes done by them in the proper book for a secretary for this purpose.

Receiving two visitors at the same time is prohibited. When meeting with one visitor is finished, the meeting with another visitor can begin - they can meet at the cabinet door.

## Input

There is one number of n in the first line. It is a number of visitors who signed up for a meeting. There are two numbers `T₁ᵢ` and `T₂ᵢ` in n lines, separated with one space. The meeting begins with director at `T₁ᵢ`, at `T₂ᵢ` the meeting ends. The time is written in format hh:mm. It is known that n ≤ 1000, time is given during one day, and `T₂ᵢ` ≥ `T₁ᵢ` for all i.

## Output

One number - the maximal number of visitors, who will be able to have a meeting with director of school during the working day.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
4
09:10 13:05
14:25 14:30
14:20 15:15
15:00 17:00
```

## Output example #1
```
3
```
