# Wizards' Duel [⬀](https://codeforces.com/problemset/problem/591/A)

Harry Potter and He-Who-Must-Not-Be-Named engaged in a fight to the death once again. This time they are located at opposite ends of the corridor of length `l`. Two opponents simultaneously charge a deadly spell in the enemy. We know that the impulse of Harry's magic spell flies at a speed of `p` meters per second, and the impulse of You-Know-Who's magic spell flies at a speed of `q` meters per second.

The impulses are moving through the corridor toward each other, and at the time of the collision they turn round and fly back to those who cast them without changing their original speeds. Then, as soon as the impulse gets back to it's caster, the wizard reflects it and sends again towards the enemy, without changing the original speed of the impulse.

Since Harry has perfectly mastered the basics of magic, he knows that after the second collision both impulses will disappear, and a powerful explosion will occur exactly in the place of their collision. However, the young wizard isn't good at math, so he asks you to calculate the distance from his position to the place of the second meeting of the spell impulses, provided that the opponents do not change positions during the whole fight.

## Input

The first line of the input contains a single integer `l` (`1 ≤ l ≤ 1 000`) — the length of the corridor where the fight takes place.

The second line contains integer `p`, the third line contains integer `q` (`1 ≤ p, q ≤ 500`) — the speeds of magical impulses for Harry Potter and He-Who-Must-Not-Be-Named, respectively.

## Output

Print a single real number — the distance from the end of the corridor, where Harry is located, to the place of the second meeting of the spell impulses. Your answer will be considered correct if its absolute or relative error will not exceed `10⁻⁴`.

Namely: let's assume that your answer equals a, and the answer of the jury is b. The checker program will consider your answer correct if ![](581-a.png).

## Examples

### input
```
100
50
50
```

### output
```
50
```

### input
```
199
60
40
```

### output
```
119.4
```

## Note

In the first sample the speeds of the impulses are equal, so both of their meetings occur exactly in the middle of the corridor.
