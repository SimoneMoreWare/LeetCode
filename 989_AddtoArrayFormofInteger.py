class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        tmp=""
        for value in num:
            tmp=tmp+str(value)

        res=str(int(tmp)+k)
        output=[]
        for cifra in res:
            output.append(cifra)
        return output
