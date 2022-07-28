class Solution:
    def reverseWords(self, s: str) -> str:
        value=s.split()
        res=""
        for word in value:
            res=res+word[::-1]+" "

        return res.rstrip()
