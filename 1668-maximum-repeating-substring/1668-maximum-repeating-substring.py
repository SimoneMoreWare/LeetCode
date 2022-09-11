class Solution:
    def maxRepeating(self, sequence: str, word: str) -> int:
        count=0
        while(sequence.find((count+1)*word)!=-1):
            count=count+1
        return count