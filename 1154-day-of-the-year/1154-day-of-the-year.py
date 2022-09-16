def leapyear(year):
    if ((year % 400 == 0) and (year % 100 == 0)) or ((year % 4 ==0) and (year % 100 != 0)):
        return True
    return False

class Solution:
    def dayOfYear(self, date: str) -> int:
        dayfotmonths=[31,28,31,30,31,30,31,31,30,31,30,31]
        date=date.split("-")
        year=date[0]
        month=date[1]
        day=date[2]
        res=0
        if leapyear(int(year)) and int(month)>2:
            res=res+sum(dayfotmonths[:int(month)-1])+int(day)+1
        else:
            res=res+sum(dayfotmonths[:int(month)-1])+int(day)
        return res