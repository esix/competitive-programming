#!/usr/bin/env python3

import sys
import re

p_line = re.compile(r'^Sensor at x=(-?\d+), y=(-?\d+): closest beacon is at x=(-?\d+), y=(-?\d+)$')

beacons = set()
sensors = []

lines10 = []
lines2000000 = []


def project(sensor, y):
    """ project sensor on line"""
    (x0, y0, dist) = sensor
    dy = abs(y - y0)
    x_start = x0 - (dist - dy)
    x_end = x0 + (dist - dy)
    return (x_start, x_end) if x_start <= x_end else None

def intersects(line1, line2):
    (start1, end1) = line1
    (start2, end2) = line2
    return start1 <= start2 <= end1 or start1 <= end2 <= end1 or \
           start2 <= start1 <= end2 or start2 <= end1 <= end2 or \
           start1 == end2 + 1 or \
           start2 == end1 + 1

def join_lines(line1, line2):
    (start1, end1) = line1
    (start2, end2) = line2
    return (min(start1, start2), max(end1, end2))

def merge_lines(lines):
    lines.sort(key=lambda line: line[0])
    i = 1
    while i < len(lines):
        while i > 0 and intersects(lines[i], lines[i-1]):
            lines[i - 1] = join_lines(lines[i], lines[i-1])
            del lines[i]
            i -= 1
        i += 1

def line_len(line): return line[1] - line[0] + 1
        

for line in sys.stdin:
    m = p_line.match(line.strip())
    sensor_x, sensor_y, beacon_x, beacon_y = int(m[1]), int(m[2]), int(m[3]), int(m[4])
    dist = abs(beacon_x - sensor_x) + abs(beacon_y - sensor_y)
    sensors.append((sensor_x, sensor_y, dist))
    beacons.add((beacon_x, beacon_y))

for sensor in sensors:
    if p10 := project(sensor, 10):
        lines10.append(p10)

    if p2000000 := project(sensor, 2000000):
        lines2000000.append(p2000000)


beacons10 = [b for b in beacons if b[1] == 10]
merge_lines(lines10)
print("10:", sum(map(line_len, lines10)) - len(beacons10))

beacons2000000 = [b for b in beacons if b[1] == 2000000]
merge_lines(lines2000000)
print("2000000: ", sum(map(line_len, lines2000000)) - len(beacons2000000))


for y in range(0, 21):
    lines = []
    for sensor in sensors:
        if p := project(sensor, y):
            lines.append(p)
    merge_lines(lines)
    if (len(lines) > 1):
        print ("distress(0..20)= ", 4000000 * (lines[0][1] + 1) + y)

for y in range(0, 4000001):
    lines = []
    for sensor in sensors:
        if p := project(sensor, y):
            lines.append(p)
    merge_lines(lines)
    if (len(lines) > 1):
        print ("distress(0..4000000) = ", 4000000 * (lines[0][1] + 1) + y)
