class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        sizeS=len(s)
        sizePart=len(part)
        while(sizeS>sizePart):
            s=s.replace(part,"",1)
            sizeS=sizeS-sizePart
        s=s.replace(part,"",1)
        return s