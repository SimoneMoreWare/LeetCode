class Solution:
    def generateTheString(self, n: int) -> str:
        res=""

        if n%2==0:
            oddvalue=int(n/2)
            if oddvalue%2==0:
                oddvalue=oddvalue+1
            res="a"*oddvalue+"e"*(n-oddvalue)
        else:
            res="a"*n
        return (res)
