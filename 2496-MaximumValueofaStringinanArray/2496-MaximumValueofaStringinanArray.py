class Solution:
    def maximumValue(self, strs: List[str]) -> int:

        maximum = 0

        for str in strs:
            countDigit = 0
            for c in str:
                if c.isalpha():
                    if len(str) > maximum:
                        maximum = len(str)
                        break
                else:
                    countDigit = countDigit + 1

            if countDigit == len(str):
                if int(str) > maximum:
                    maximum = int(str)

        return maximum

'''
2496-MaximumValueofaStringinanArray
https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/
'''
