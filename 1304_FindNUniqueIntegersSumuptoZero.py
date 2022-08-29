class Solution:
    def sumZero(self, n: int) -> List[int]:
        res=[]
        start=int(n/2)*-1
        for i in range(n):
            res.append(start)
            start=start+1
            if n%2==0 and start==0:
                start=start+1

        return (res)
