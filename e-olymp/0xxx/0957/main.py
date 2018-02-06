#!/usr/bin/env python3

from math import sqrt 
print ("%.3f" % sqrt(sum(map(int, filter(str.isdigit, input())))))
