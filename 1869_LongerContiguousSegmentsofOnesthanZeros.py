class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        countone=0
        countzero=0
        maxlenone=0
        maxlenzero=0
        for numb in s:
            if int(numb)==1:
                countone=countone+1
                if countzero>maxlenzero:
                    maxlenzero=countzero
                countzero=0
            else:
                countzero=countzero+1
                if countone>maxlenone:
                    maxlenone=countone
                countone=0

        if countzero>maxlenzero:
            maxlenzero=countzero
        if countone>maxlenone:
            maxlenone=countone

        if maxlenone>maxlenzero:
            return True
        else:
            return False
