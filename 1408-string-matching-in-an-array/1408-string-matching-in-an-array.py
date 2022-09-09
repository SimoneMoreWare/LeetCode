class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        lunghezza_words=len(words)
        res=[]
        for i in range(lunghezza_words):
            for j in range(lunghezza_words):
                if words[i].find(words[j])!=-1 and i!=j:
                    res.append(words[j])
        return list(set(res))
                