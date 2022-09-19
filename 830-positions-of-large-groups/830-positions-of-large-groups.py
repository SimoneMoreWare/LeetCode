class Solution:
    def largeGroupPositions(self, s: str) -> List[List[int]]:
        res=[]
        flag=1
        count=1
        for i in range(0,len(s)-1):
            if s[i]==s[i+1]:
                if flag==1:
                    start=i
                    flag=0
                count=count+1
            else:
                flag=1
                if count>2:
                    value=[]
                    value.append(start)
                    value.append(i)
                    res.append(value)
                count=1
        if count > 2:
            value = []
            value.append(start)
            value.append(len(s)-1)
            res.append(value)
        return res