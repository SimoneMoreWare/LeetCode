class Solution:
    def totalMoney(self, n: int) -> int:
        numb=[1,2,3,4,5,6,7]
        day=int(n/7)
        return 28*(day)+7*(int(((day-1)*(day))/2))+(sum(numb[:n%7])+(n%7)*day)