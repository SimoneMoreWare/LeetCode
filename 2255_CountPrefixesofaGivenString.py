class Solution:
    def countPrefixes(self, words: List[str], s: str) -> int:
        count=0
        for word in words:
            if s.find(word)==0:
                count=count+1

        return (count)
