# [Magic Trick](http://poj.org/problem?id=1800)

## Description

Background

Warning! This problem statement contains a serious spoiler. It shows the trick behind a magic trick. So if you still want to be amazed in case somebody shows this trick to you then do NOT read the rest of this problem statement. Stop reading... NOW!

Problem

Well, you're still reading, so obviously you have no respect for magic tricks. Be ashamed, please. Ok,here's what happens. The magician shows you a text with three paragraphs like this one:
```
It was a horribly dark night.
The moon was shining, but not much.

A suspicious stranger entered the
bar and went straight to John Doe.

"I'm searching for aliens, can I
borrow your computer?", he said.
```

He then asks you to secretly pick a word in the first paragraph. Then you shall do this:
1. Count the number of characters in your word (call that number X).
2. From your word move on X words.

Repeat these two steps until you reach the third paragraph. Then tell the magician that you're done.After some hocus pocus he tells you the word you ended up with.

For our purposes, a "word" is defined as consecutive letters (A-Z,a-z). For example, "I'm" is regarded as two separate words.

For example, let's say you choose "night" in the above example. It has 5 characters, so you move on five words: "The", "moon", "was", "shining", "but". Our new word is "but". You move on 3 words to "A",then 1 to "suspicious", then 10 to "Doe" and then 3 to "searching". Now you tell the magician that you're ready. He says that you've reached "searching".

How can he know? Well, it doesn't matter where you start in the first paragraph, you'll always end up at "searching". The magician needs new texts and asks you to help him to find all possible outcomes (in the above example, "searching" is the only one). Apart from words, a possible outcome is `-outside-`,which means it's possible to jump behind the third paragraph. Also, he's not interested if more than three outcomes are possible.

## Input

The first line contains the number of scenarios. For each scenario, three lines are given, representing the three paragraphs. No line is longer than `100000` characters. Every paragraph will contain at least one word.

## Output

The output for every scenario begins with a line containing `Scenario #i:`, where i is the number of the scenario starting at 1. Then print the possible outcomes (possibly including `-outside-`) in alphabetical/lexicographical order, one word per line. Write words in lower case. Don't list outcomes more than once. If however there are more than three possible outcomes, then print `-too many-` and do **not** print any of them. Terminate the output for the scenario with a blank line.

### Sample Input
```
4
It was a horribly dark night. The moon was shining, but not much.
A suspicious stranger entered the bar and went straight to John Doe.
"I'm searching for aliens, can I borrow your computer?", he said.
!pablo espanol!
!pablo espanol!
!pablo espanol!
c'mon howLongOrShortCanASingleWordBe?
a b c d e f g f e d c b a
54254#@%$^%^@4626^#^%^$hahaha#$@%#$@63456326
Hello buddy dance tango!
PleaseOhPleaseJumpOverMe
This is too much for me...
```

### Sample Output
```
Scenario #1:
searching

Scenario #2:
-outside-
espanol

Scenario #3:
-outside-
hahaha

Scenario #4:
-too many-
```

## Source

TUD Programming Contest 2004, Darmstadt, Germany