class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        l=len(digits)
        x=1
        numb=1
        for i in reversed(range(l)):
            numb=numb+digits[i]*x
            x=10*x

        numb=list(map(int,str(numb)))
        return numb
