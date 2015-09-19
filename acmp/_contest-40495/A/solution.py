idx = {
  "rock": 0,
  "scissors": 1,
  "paper": 2
}

a, b = input(), input()
a = idx[a]
b = idx[b]

if b == (a + 1) % 3:
    print("first")
elif a == (b+1)%3:
    print("second")
else:
    print("draw")
