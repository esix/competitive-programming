#!/usr/bin/env python3

while True:
    h, m = map(int, input().split(' '))
    if h == 0 and m == 0:
        break
    
    h_angle = ((h % 12) + (m % 60) / 60) * 360 / 12
    m_angle = (m % 60) * 360 / 60

    if h_angle > 180:
        h_angle -= 360

    if m_angle > 180:
        m_angle -= 360

    a = abs(h_angle - m_angle)
    if a > 180:
        a = 360 - a
    print("At %d:%02d the angle is %.1f degrees." % (h, m, a))