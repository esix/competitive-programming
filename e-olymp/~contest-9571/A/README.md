# [Brazil](https://www.e-olymp.com/en/contests/9571/problems/83967)
In Terry Gilliam’s movie “Brazil” we are introduced to a dystopian world that is governed by an overgrown, all-encompassing bureaucratic system.

And while there is some basic similarity to the world Orwell imagined in Nineteen Eighty-Four, the world in Brazil lacks the efficiency. The bureaucratic system is completely dysfunctional, and the entire world over-relies on old and poorly maintained machinery.

All in all, Brazil is a movie well worth seeing. This problem is inspired by the bureaucratic system depicted in many of its scenes.

Here are the basics about the system:

- There is an almost unlimited number of bureaucrats. For the purpose of this problem, the bureaucrats are numbered 1 through 10⁹.
- The bureaucrats handle forms. Each form is a single sheet of paper. Each form has an ID: an integer between 1 and 10⁹ inclusive. There may be multiple forms with the same ID.
- At any moment, each bureaucrat has zero or more forms on his desk. These forms are always arranged into a single pile.
- All the time, citizens come to bureaucrats to file new forms. A new form is filled by submitting it to any bureaucrat. That bureaucrat takes the form and places it on top of his pile.
- From time to time, a bureaucrat may decide that his pile of unprocessed forms is too tall. In that case he waits for another bureaucrat to stop paying attention for a moment. Once that happens, our bureaucrat takes his entire pile of forms, and places it on top of the pile of the unsuspecting other bureaucrat. (The order of forms in the pile is preserved. Our bureaucrat now has an empty table.)
- No form gets processed. Ever. All forms just circulate among the bureaucrats forever.

Your task is to simulate this machinery. More precisely, simulate a sequence of requests, where each request is either “bureaucrat B received a new form F”, or “bureaucrat B₁ gave all his forms to bureaucrat B₂”. Assume that at the beginning of the simulation there are no forms anywhere.

## Input
Contains at most 10⁵ + 1 lines. Each line has one of the following three forms:

- “A b f”, where b is an ID of a bureaucrat, and f is an ID of a new form being Added to the top of his pile.
“Mb₁b₂”, where b₁ and b₂ are IDs of bureaucrats such that we are Moving all forms from the desk of b₁ to the top of b₂’s pile. (Note that it is possible that the desk of b₁ is empty, in which case nothing happens.)
- “E”, meaning that the simulation should End. This line will always occur exactly once: as the last line of input.

## Output
Consider all bureaucrats who have non-empty piles of forms at the end. For each of them, output a single line of the form “id: f₁f₂ ... fn”, where id is the bureaucrat’s ID, and f₁ through fn are the IDs of forms in his pile, from top to bottom. The bureaucrat IDs in output must appear in ascending order. Mind the spaces, they have to be output exactly in the required places.

## Note
Here is what happened in sample test 1, in order:

- Bureaucrat 10 received a new form 47.
- Bureaucrat 10 gave all his forms (1 form) to bureaucrat 20.
- Bureaucrat 20 gave all his forms (1 form) back to bureaucrat 10.
- Bureaucrat 20 gave all his forms (0 forms) to bureaucrat 10.
- Bureaucrat 20 received a new form 42.
- Bureaucrat 20 received a new form 43.
- Bureaucrat 20 gave all his forms (2 forms) to bureaucrat 10.

## Input example #1
```
A 10 47
M 10 20
M 20 10
M 20 10
A 20 42
A 20 43
M 20 10
E
```

## Output example #1
```
10: 43 42 47
```

## Input example #2
```
A 1234 111111111
A 567 222222222
E
```

## Output example #2
```
567: 222222222
1234: 111111111
```
