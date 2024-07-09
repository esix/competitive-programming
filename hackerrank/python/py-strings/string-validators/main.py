if __name__ == '__main__':
    s = input()
    for l in [str.isalnum, str.isalpha, str.isdigit, str.islower, str.isupper]:
        print(bool(list(filter(l, s))))

