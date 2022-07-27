class Solution:
    def addBinary(self, a: str, b: str) -> str:
        integer_sum = int(a, 2) + int(b, 2)
        binary_sum = bin(integer_sum)
        return (str(binary_sum)[2:])
