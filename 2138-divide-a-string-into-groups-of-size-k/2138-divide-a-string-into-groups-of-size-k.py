class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
            res=[]
            for i in range(0,len(s),k):
                if len(s[i:i+k])>k-1:
                    res.append(s[i:i+k])
                else:
                    res.append(s[i:i+k]+(k-len(s[i:i+k]))*fill)
            return res