class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        p=[2, 3, 5, 7, 13]
        for value in p:
            res=pow(2,value-1)*(pow(2,value)-1)
            if res==num:
                return True
            elif res>num:
                return False
#https://en.wikipedia.org/wiki/Perfect_number
