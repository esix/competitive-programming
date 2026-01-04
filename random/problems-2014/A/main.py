import itertools

n = int(input())

segments = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]


def get_number_of_segments(x):
    return segments[x % 10] + segments[x // 10]


def fits(hh, mm):
    return get_number_of_segments(hh) + get_number_of_segments(mm) == n

result = next(((hh, mm) for (hh, mm) in itertools.product(range(24), range(60)) if fits(hh, mm)), None)

if result:
    (hh, mm) = result
    print(f"{hh:02d}:{mm:02d}")
else:
    print("Impossible")
