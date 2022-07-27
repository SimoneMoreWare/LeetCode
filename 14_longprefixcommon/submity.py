class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs=sorted(strs,key=len)
        res=dict()
        if len(strs)==1:
            return strs[0]
        
        for k in range(1,len(strs)):
                if len(strs[0])!=1:
                    for i in range(1,len(strs[0])+1):
                        if strs[0][:i] in strs[k][:i]:
                            res.setdefault(strs[0][i-1], 0)
                            res[strs[0][:i]] = res.get(strs[0][:i], 0) + 1
                else:
                    if strs[0][0] in strs[k][0]:
                        res.setdefault(strs[0][0], 0)
                        res[strs[0][0]] = res.get(strs[0][0], 0) + 1
        flag=1
        ricorda=""
        maxlen=0
        for value in res.items():
            if(value[1]==len(strs)-1):
                if len(value[0]) > maxlen:
                    ricorda = value[0]
                    maxlen = len(value[0])

        return ricorda
