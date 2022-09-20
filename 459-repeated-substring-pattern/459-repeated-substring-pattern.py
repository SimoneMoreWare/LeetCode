class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        for i in range(int(len(s)/2)):
            if s.replace(s[:i+1],"")=="":
                return True
        return False