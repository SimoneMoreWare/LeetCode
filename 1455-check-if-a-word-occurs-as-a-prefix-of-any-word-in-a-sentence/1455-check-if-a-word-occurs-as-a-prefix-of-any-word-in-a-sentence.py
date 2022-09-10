class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        count=1
        for word in sentence.split():
            if word.startswith(searchWord)==True: return count
            count=count+1
        return -1