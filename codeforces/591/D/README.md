# Chip 'n Dale Rescue Rangers [⬀](https://codeforces.com/problemset/problem/590/B)

A team of furry rescue rangers was sitting idle in their hollow tree when suddenly they received a signal of distress. In a few moments they were ready, and the dirigible of the rescue chipmunks hit the road.

We assume that the action takes place on a Cartesian plane. The headquarters of the rescuers is located at point <code>(x<sub>1</sub>, y<sub>1</sub>)</code>, and the distress signal came from the point <code>(x<sub>2</sub>, y<sub>2</sub>)</code>.

Due to Gadget's engineering talent, the rescuers' dirigible can instantly change its current velocity and direction of movement at any moment and as many times as needed. The only limitation is: the speed of the aircraft relative to the air can not exceed  meters per second.

Of course, Gadget is a true rescuer and wants to reach the destination as soon as possible. The matter is complicated by the fact that the wind is blowing in the air and it affects the movement of the dirigible. According to the weather forecast, the wind will be defined by the vector <code>(v<sub>x</sub>, v<sub>y</sub>)</code> for the nearest `t` seconds, and then will change to <code>(w<sub>x</sub>, w<sub>y</sub>)</code>. These vectors give both the direction and velocity of the wind. Formally, if a dirigible is located at the point <code>(x, y)</code>, while its own velocity relative to the air is equal to zero and the wind <code>(u<sub>x</sub>, u<sub>y</sub>)</code> is blowing, then after <code>τ</code> seconds the new position of the dirigible will be <code>(x + τ ⋅ u<sub>x</sub>, y + τ ⋅ u<sub>y</sub>)</code>.

Gadget is busy piloting the aircraft, so she asked Chip to calculate how long will it take them to reach the destination if they fly optimally. He coped with the task easily, but Dale is convinced that Chip has given the random value, aiming only not to lose the face in front of Gadget. Dale has asked you to find the right answer.

It is guaranteed that the speed of the wind at any moment of time is strictly less than the maximum possible speed of the airship relative to the air.

## Input

The first line of the input contains four integers `x₁`, `y₁`, `x₂`, `y₂` (`|x₁|, |y₁|, |x₂|, |y₂| ≤ 10 000`) — the coordinates of the rescuers' headquarters and the point, where signal of the distress came from, respectively.

The second line contains two integers <code>υ<sub>max</sub></code> and `t` (`0 < υ, t ≤ 1000`), which are denoting the maximum speed of the chipmunk dirigible relative to the air and the moment of time when the wind changes according to the weather forecast, respectively.

Next follow one per line two pairs of integer <code>(v<sub>x</sub>, v<sub>y</sub>)</code> and <code>(w<sub>x</sub>, w<sub>y</sub>)</code>, describing the wind for the first `t` seconds and the wind that will blow at all the remaining time, respectively. It is guaranteed that <code>υ<sub>x</sub><sup>2</sup> + υ<sub>y</sub><sup>2</sup> < υ<sub>max</sub><sup>2</sub></code> and <code>w<sub>x</sub><sup>2</sup> + w<sub>y</sub><sup>2</sup> < υ<sub>max</sub><sup>2</sup></code>.

## Output

Print a single real value — the minimum time the rescuers need to get to point <code>(x<sub>2</sub>, y<sub>2</sub>)</code>. You answer will be considered correct if its absolute or relative error does not exceed <code>10<sup>-6</sup></code>.

Namely: let's assume that your answer is <code>a</code>, and the answer of the jury is <code>b</code>. The checker program will consider your answer correct, if ![](591-d.png).

## Examples

### input
```
0 0 5 5
3 2
-1 -1
-1 0
```

### output
```
3.729935587093555327
```

### input
```
0 0 0 1000
100 1000
-50 0
50 0
```

### output
```
11.547005383792516398
```
