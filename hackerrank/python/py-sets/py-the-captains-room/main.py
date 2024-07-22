if __name__ == '__main__':
    n = int(input())
    not_captain = set()
    maybe_captain = set()
    for member in map(int, input().split(' ')):
        if member in not_captain:
            pass
        elif member in maybe_captain:
            maybe_captain.remove(member)
            not_captain.add(member)
        else:
            maybe_captain.add(member)
    print(list(maybe_captain)[0])

