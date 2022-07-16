class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        word=""

        if(len(word1)>len(word2)):
            l=len(word1)
        else:
            l=len(word2)

        for i in range(l):
            if i<len(word1):
                word=word+word1[i]
            if i<len(word2):
                word=word+word2[i]
        
        return word
