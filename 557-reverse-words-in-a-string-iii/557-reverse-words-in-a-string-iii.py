class Solution:
    def reverseWords(self, s: str) -> str:
        res=""
        for word in s.split():
            res=res+word[::-1]+" "
        return res.rstrip()