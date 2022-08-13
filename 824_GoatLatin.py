class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        vow=['a','e','i','o','u','A','E','I','O','U']
        res=""
        count=1
        for word in sentence.split():
            if word[0] in vow:
                word=word+"ma"
            else:
                tmp=word[0]
                word=word.replace(word[0],"",1)+tmp+"ma"
            word=word+(count*'a')
            count=count+1
            res=res+word+" "

        return res.rstrip()  
