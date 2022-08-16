class Solution:
    def replaceDigits(self, s: str) -> str:
        len_stringa=len(s)

        for i in range(1,len_stringa,2):
            s=s.replace(s[i],chr(ord(s[i-1])+int(s[i])),1)

        return s
