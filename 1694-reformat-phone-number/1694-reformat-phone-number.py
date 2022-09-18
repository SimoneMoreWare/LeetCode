class Solution:
    def reformatNumber(self, number: str) -> str:
        res=""
        number=number.split("-")
        number="".join("".join(number).split())
        lunghezza_number=len(number)
        k=0
        if lunghezza_number%3==1:
            k=4
        elif lunghezza_number%3==2:
            k=2

        for i in range(0,lunghezza_number-k,3):
            res=res+number[i:i+3]+"-"

        if k==4:
            res=res+number[lunghezza_number-4:lunghezza_number-2]+"-"
            res=res+number[lunghezza_number-2:lunghezza_number]
        elif k==2:
            res=res+(number[lunghezza_number-2:lunghezza_number])
        return res.rstrip("-")