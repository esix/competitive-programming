def is_vowel(c):
    return c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'

def minion_game(string):
    stuart = 0
    kevin = 0
    l = len(string)
    for i in range(l):
        if is_vowel(string[i]):
            kevin += l - i
        else:
            stuart += l - i
    if stuart > kevin:
        print('Stuart', stuart)
    elif kevin > stuart:
        print('Kevin', kevin)
    else:
        print('Draw')

if __name__ == '__main__':
    s = input()
    minion_game(s)

