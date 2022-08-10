class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        count=0
        for ch in s:
            if ch==letter:
                count=count+1

        return (int((count/len(s))*100))
