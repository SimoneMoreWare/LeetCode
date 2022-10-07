class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        res=0
        for i in range(len(stones)):
            for j in range(len(jewels)):
                if stones[i]==jewels[j]: res=res+1
                    
        return res