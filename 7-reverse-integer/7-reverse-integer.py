class Solution:
    def reverse(self, x: int) -> int:
        x=str(x)
        if x[0]=="-":
            value= (-1)*int((x[:0:-1]))
            if value<=-2147483647:
                return 0
            return value
        else:
            value=int(x[::-1])
            if value>=2147483648:
                return 0
            return value