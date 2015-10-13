n = int(input())

as_ = list(map(int, input().split(' ')))
bs_ = list(map(int, input().split(' ')))

as_ = as_[1:]
bs_ = bs_[1:]

def play_round():
    global as_, bs_
    a = as_[0]
    as_ = as_[1:]
    b = bs_[0]
    bs_ = bs_[1:]
    if a > b:
        as_.append(b)
        as_.append(a)
    else:
        bs_.append(a)
        bs_.append(b)


has_played = set()
n = 0
while(True):
    if len(as_) == 0 or len(bs_) == 0:
        break
    s = ','.join(map(str, as_)) + ':' + ','.join(map(str, bs_))
    if s in has_played:
        break
    has_played.add(s)
    play_round()
    n += 1


if len(as_) == 0:
    print(n, 2)
elif len(bs_) == 0:
    print(n, 1)
else:
    print(-1)
