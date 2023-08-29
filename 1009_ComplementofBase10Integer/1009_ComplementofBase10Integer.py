class Solution:
    def bitwiseComplement(self, n: int) -> int:

        cpyN = n
        binaryComplement = ""
        if cpyN==0: binaryComplement="1"
        while cpyN!=0:
            
            if cpyN%2==0:
                binaryComplement =  "1" + binaryComplement
            else:
                binaryComplement =  "0" + binaryComplement 

            cpyN = cpyN//2

        return int(binaryComplement, 2) 
