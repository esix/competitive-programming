def is_leap(year):
    return year % 400 == 0 or (year % 100 != 0 and year % 4 == 0)

year = int(input())
print(is_leap(year))