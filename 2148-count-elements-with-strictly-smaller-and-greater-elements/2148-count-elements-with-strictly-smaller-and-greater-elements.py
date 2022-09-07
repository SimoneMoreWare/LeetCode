class Solution:
    def countElements(self, nums: List[int]) -> int:
        massimo = -100001
        minimo = 100001
        count=0
        if len(nums) == 1:
            return 0

        for value in nums:
            if value > massimo:
                massimo = value
            if value < minimo:
                minimo = value
        for value in nums:
            if value!=minimo and value!=massimo:
                count=count+1
        return count