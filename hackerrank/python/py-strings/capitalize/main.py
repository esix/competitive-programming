#!/bin/python3

import math
import os
import random
import re
import sys


def capitalize_word(word):
    return word[:1].upper() + word[1:]

def solve(s):
    return ' '.join(map(capitalize_word, s.split(' ')))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()

