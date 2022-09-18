class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        res=0
        flag=1
        for j in range(len(strs[0])):
            for i in range(len(strs)-1):
                if (strs[i][j]>strs[i+1][j]) and flag==1:
                    res=res+1
                    flag=0
            flag=1
        return res