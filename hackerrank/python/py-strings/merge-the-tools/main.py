def remove_duplicate_letters(s): 
    result = []
    for c in s:
        if c not in result:
            result.append(c)
    return ''.join(result);

def merge_the_tools(string, k):
    for i in range(0, len(string), k):
        print(remove_duplicate_letters(string[i:i+k]))

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)

