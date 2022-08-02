class Solution:
    def isPalindrome(self, x: int) -> bool:
        x=str(x)
        res = x[::-1]
        if res==x:
            return True
        return False
