s = input()[:7]

TMPL = {
    'aa': 2,
    'aba':2,
    'aab':2,
    'abb':2,
    'aaa':3,
    'abac':2,
    'abcb':2,
    'abab':3,
    'aabb':3,
    'abba':4,
    'abbb':3,
    'abaa':3,
    'aaba':3,
    'aaab':3,
    'aaaa':5
}

def score(s):
    m = {}
    a = 'a'
    for d in s:
        if d not in m:
            m[d] = a
            a = chr(ord(a) + 1)
    t = ''.join([m[c]  for c in s])
    return TMPL[t] if t in TMPL else 0

def score_sum(l):
    return sum(map(score, l))

bs = -1
bl = None

def iter(l, s):
    global bs, bl
    if len(s) < 4:
        l.append(s)
        score = score_sum(l)
        if score > bs: bs, bl = score, l[:]
        l.pop()
        return
    for i in range(2, 5):
        if len(s) - i > 1:
            l.append(s[:i])
            iter(l, s[i:])
            l.pop()
        elif len(s) == i:
            l.append(s)
            score = score_sum(l)
            if score > bs: bs, bl = score, l[:]
            l.pop()

iter([],s)
print('-'.join(map(str, bl)))
print(bs)
