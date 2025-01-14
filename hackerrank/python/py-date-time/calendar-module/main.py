import datetime
import calendar
mm, dd, yy = map(int, input().split(' '))
date = datetime.datetime(yy, mm, dd)
print (calendar.day_name[date.weekday()].upper())
