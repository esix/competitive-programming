def count_substring(string, sub_string):
    count = 0
    pos = -1
    while -1 != (pos := string.find(sub_string, pos + 1)):
        count += 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)

