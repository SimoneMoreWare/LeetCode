class Solution:
    def isPrefixString(self, s: str, words: List[str]) -> bool:
        buildword=""
        for word in words:
            buildword=buildword+word
            if buildword==s:
                return True
        return False