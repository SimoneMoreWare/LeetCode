class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        neworder=sorted(words, key=lambda word: [order.index(c) for c in word]) #posso imettere un nuovo alfabeto custom per l ordine
        if neworder==words:
            return True
        else:
            return False
