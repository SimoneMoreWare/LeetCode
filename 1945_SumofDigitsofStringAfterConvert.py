class Solution:
    def getLucky(self, s: str, k: int) -> int:
        res=""
        for ch in s:
            res=str(ord(ch)-ord('a')+1)+res
        for i in range(k):
            somma=0
            for value in res:
                somma=somma+int(value)
            res=str(somma)

        return (res)
