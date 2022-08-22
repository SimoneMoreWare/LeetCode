class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        massimo=1
        for sentence in sentences:
            lunghezzaparola=len(sentence.split())
            if lunghezzaparola>massimo:
                massimo=lunghezzaparola

        return (massimo)
