class Solution:
    def thousandSeparator(self, n: int) -> str:
        n=str(n)
        lunghezza_n=len(n)
        if lunghezza_n<=3:
            return n

        if lunghezza_n%3==0:
            skip=3
        else:
            skip=lunghezza_n%3
        n=n[:skip]+"."+n[skip:]

        for i in range(skip+4,lunghezza_n+int(lunghezza_n/3)-1,4):
            n=n[:i]+"."+n[i:]

        return n