class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        numb=""
        res=[]
        for digit in nums:
            numb=numb+str(digit)
            if int(numb,2)%5==0:
                res.append(True)
            else:
                res.append(False)
        return res