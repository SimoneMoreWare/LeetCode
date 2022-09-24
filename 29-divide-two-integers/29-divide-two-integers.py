class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        value = int(dividend/divisor)
        if value<=-2147483648:
            return -2147483648
        elif value>=2147483647:
            return 2147483647
        return value
            