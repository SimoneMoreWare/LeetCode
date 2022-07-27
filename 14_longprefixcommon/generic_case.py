class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs=sorted(strs,key=len)
        res=dict()
        if len(strs)==1:
            return strs[0]
        
        for k in range(1,len(strs)):
            for i in range(len(strs[0])):
                for j in range(1,len(strs[0])+1):
                    if i<j:
                        if strs[0][i:j] in strs[k]:
                            res.setdefault(strs[0][i:j], 0)
                            res[strs[0][i:j]]=res.get(strs[0][i:j], 0)+1
        flag=1
        ricorda=""
        maxlen=0
        for value in sorted(res.items(),key=lambda item: item[1],reverse=True):
            if flag==1:
                massimo=value[1]
                flag=0

            if(massimo==value[1]):
                if len(value[0])>maxlen:
                    ricorda=value[0]
                    maxlen=len(value[0])

        return ricorda
