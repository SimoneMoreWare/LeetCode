class Solution:
    def numOfPairs(self, nums: List[str], target: str) -> int:
        count=0
        for i in range(len(nums)):
            for j in range(0,len(nums)):
                if (nums[i]+nums[j])==target and i!=j:
                    count=count+1
        return count