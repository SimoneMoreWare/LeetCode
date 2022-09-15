class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        textlist=text.split()
        res=[]
        for i in range(1,len(textlist)):
            if textlist[i-1]==first and textlist[i]==second and i!=len(textlist)-1:
                res.append(textlist[i+1])
        return res