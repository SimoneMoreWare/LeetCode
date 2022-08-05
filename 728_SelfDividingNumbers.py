class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res=[]
        for i in range(left,right+1):
            if i<10:
                res.append(i)
            else:
                x=str(i)
                count=0
                for j in range(len(x)):
                    if int(x[j])!=0 and i%int(x[j])==0:
                            count=count+1
                    else:
                        break
                if count==len(x):
                    res.append(i)

        return (res)
