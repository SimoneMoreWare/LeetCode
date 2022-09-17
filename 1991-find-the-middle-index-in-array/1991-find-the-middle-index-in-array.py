class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        for i in range(1,len(nums)+1):
            if sum(nums[:i-1])==sum(nums[i:]): return i-1
        return -1