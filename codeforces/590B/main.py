import math
x1, y1, x2, y2 = map(int, input().split(' ')[:4])
u_max, tau = map(int, input().split(' ')[:2])
vx, vy = map(int, input().split(' ')[:2])
wx, wy = map(int, input().split(' ')[:2])

A = (x2 - x1, y2 - y1)
v = (-vx, -vy)
w = (-wx, -wy)

B = (A[0] + tau * v[0], A[1] + tau * v[1])


def solve_sqr_eq(a, b, c):
    d = b**2 - 4*a*c
    if d >= 0:
        return ((-b + math.sqrt(d)) / (2*a), (-b - math.sqrt(d)) / (2*a))
    else:
        return None


a = v[0]**2 + v[1]**2 - u_max**2
b = 2 * A[0] * v[0] + 2 * A[1] * v[1]
c = A[0]**2 + A[1]**2
r = solve_sqr_eq(a, b, c)

if r is not None:
    t1, t2 = r
    t_min = min(t1, t2)
    t_max = max(t1, t2)
    if 0 <= t_min <= tau:
        print(t_min)
        exit(0)
    if 0 <= t_max <= tau:
        print(t_max)
        exit(0)


a = w[0]**2 + w[1]**2 - u_max**2
b = 2 * B[0] * w[0] + 2 * B[1] * w[1] - u_max**2 * 2 * tau
c = B[0]**2 + B[1]**2 - u_max**2 * tau**2
r = solve_sqr_eq(a, b, c)

if r is not None:
    t1, t2 = r
    t_min = min(t1, t2)
    t_max = max(t1, t2)
    if 0 <= t_min :
        print(t_min + tau)
        exit(0)
    if 0 <= t_max:
        print(t_max + tau)
        exit(0)
