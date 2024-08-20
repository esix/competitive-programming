#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    s = input()
    from collections import Counter
    counter = Counter(s)
    sort_fn = lambda c: (-counter[c], c)
    fmt_fm = lambda c: '{0} {1}'.format(c, counter[c])
    print('\n'.join(map(fmt_fm, sorted(counter.keys(), key=sort_fn)[0:3])))

