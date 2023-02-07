#!/usr/bin/env python3

import sys

def parse(line):
    [dir, steps] = line.strip().split(' ')
    return (dir, int(steps))

motions = list(map(parse, sys.stdin))


def fix_deltas(dx: int, dy: int):
    if abs(dx) == 2 and abs(dy) == 2:
        dx //= 2
        dy //= 2
    if abs(dx) == 2:
        if abs(dy) == 1: dy = 0
        dx //= 2
    elif abs(dy) == 2:
        if abs(dx) == 1: dx = 0
        dy //= 2
    return (dx, dy)


def move(dx, dy):
    global hx, hy, body
    hx += dx
    hy += dy
    for i in range(len(body)):
        (idx, idy) = body[i]
        idx -= dx
        idy -= dy
        new_idx, new_idy = fix_deltas(idx, idy)
        body[i] = (new_idx, new_idy)
        dx = new_idx - idx
        dy = new_idy - idy

def get_tail_position():
    tdx, tdy = hx, hy
    for (dx, dy) in body:
        tdx += dx
        tdy += dy
    return (tdx, tdy)

actions = {
    "U": lambda: move(0, -1),
    "D": lambda: move(0, 1),
    "L": lambda: move(-1, 0),
    "R": lambda: move(1, 0),
}

hx = 0
hy = 0
body = [(0, 0)]
tail_positions = set([(0, 0)])

for (dir, steps) in motions:
    for i in range(steps):
        actions[dir]()
        tx, ty = get_tail_position()
        tail_positions.add((tx, ty))

print(len(tail_positions))

hx = 0
hy = 0
body = [(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0)]
tail_positions = set([(0, 0)])

for (dir, steps) in motions:
    for i in range(steps):
        actions[dir]()
        tx, ty = get_tail_position()
        tail_positions.add((tx, ty))

print (len(tail_positions))