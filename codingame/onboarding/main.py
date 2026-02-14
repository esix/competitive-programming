import sys
import math

# CodinGame planet is being attacked by slimy insectoid aliens.
# <---
# Hint:To protect the planet, you can implement the pseudo-code provided in the statement, below the player.


# game loop
while True:
    enemy1 = input()  # name of enemy 1
    dist1 = int(input())  # distance to enemy 1
    enemy2 = input()  # name of enemy 2
    dist2 = int(input())  # distance to enemy 2

    # To debug: print("Debug messages...", file=sys.stderr, flush=True)


    # You have to output a correct ship name to shoot ("Buzz", enemy1, enemy2, ...)
    print(enemy1 if dist1 < dist2 else enemy2)
