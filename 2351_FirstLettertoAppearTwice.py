class Solution:
    def repeatedCharacter(self, s: str) -> str:
        list=26*[0]

        for ch in s:
            list[ord(ch)-ord('a')]=list[ord(ch)-ord('a')]+1
            if list[ord(ch)-ord('a')]>1:
                return (ch)

        return ('a')
