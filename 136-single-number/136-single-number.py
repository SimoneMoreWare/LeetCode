class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums=sorted(nums)
        if len(nums)==1:
            return nums[0]
        if nums[0]!=nums[1]: 
            return nums[0]
        if nums[-2]!=nums[-1]: 
            return nums[-1]
        for i in range(0,len(nums)-1):
            if nums[i]!=nums[i-1] and nums[i]!=nums[i+1]:
                return nums[i]