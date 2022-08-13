class Solution:
    def sortSentence(self, s: str) -> str:
        l=len(s.split())
        res=[0]*l
        i=0
        for word in s.split():
            index=int(word[-1])
            res[index-1]=str(word[0:len(word)-1])

        ot=""
        for wordord in res:
            ot=ot+wordord+" "

        return (ot.strip())
