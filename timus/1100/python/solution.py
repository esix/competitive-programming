
n = int(raw_input())
d = dict()

for i in xrange(0, n):
    cid, cscore = raw_input().split(' ')
    cid = int(cid)
    cscore = int(cscore)
    if not d.has_key(-cscore) : d[-cscore] = []
    d[-cscore].append(cid)

keys = sorted(d.keys())

for cscore in keys:
    for cid in d[cscore]:
        print cid, -cscore