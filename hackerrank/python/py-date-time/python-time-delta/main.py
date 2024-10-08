#!/bin/python3

import math
import os
import random
import re
import sys
from datetime import datetime
FMT = '%a %d %b %Y %H:%M:%S %z'

# Complete the time_delta function below.
def time_delta(t1, t2):
    d1 = datetime.strptime(t1, FMT)
    d2 = datetime.strptime(t2, FMT)
    delta = abs(d1 - d2)
    return str(int(delta.total_seconds()))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    t = int(input())

    for t_itr in range(t):
        t1 = input()
        t2 = input()
        delta = time_delta(t1, t2)
        fptr.write(delta + '\n')

    fptr.close()

