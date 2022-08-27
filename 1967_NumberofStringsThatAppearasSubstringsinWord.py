class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        
        count=0
        for pattern in patterns:
            if word.find(pattern)!=-1:
                count=count+1

        return (count)
