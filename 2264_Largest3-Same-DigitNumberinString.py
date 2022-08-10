class Solution:
    def largestGoodInteger(self, num: str) -> str:
        len_num=len(num)
        count=1
        massimo=0
        flag=0
        for i in range(1,len_num):
            if num[i]==num[i-1]:
                count=count+1
            else:
                count=1
            if count == 3:
                if int(num[i])>massimo:
                    massimo=int(num[i])
                flag=1
        if flag==0:
            return ""
        else:
            return (3*str(massimo))
