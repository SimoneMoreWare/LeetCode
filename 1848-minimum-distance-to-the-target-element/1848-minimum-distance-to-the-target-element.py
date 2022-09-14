class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        min_distance=10001
        for i in range(len(nums)):
            if nums[i]==target and abs(i-start)<min_distance:
                min_distance=abs(i-start)
        return min_distance