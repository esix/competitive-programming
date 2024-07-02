if __name__ == '__main__':
    data = [(input(), float(input())) for _ in range(int(input()))]
    second_score = sorted(set([p[1] for p in data]))[1]
    students = sorted([p[0] for p in data if p[1] == second_score])
    print ('\n'.join(students))
