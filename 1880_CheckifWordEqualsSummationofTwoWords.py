def calculate(Word):
        res=""
        for ch in Word:
            res=res+str(ord(ch)-ord('a'))
        return int(res)    

class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        res1=calculate(firstWord)
        res2=calculate(secondWord)
        res3=calculate(targetWord)
        if res1+res2==res3:
            return True
        return False
        
    
    
