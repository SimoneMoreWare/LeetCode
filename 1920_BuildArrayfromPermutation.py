class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        lennums=len(nums)
        ans=[0]*lennums
        for i in range(lennums):
            ans[i]=nums[nums[i]]

        return (ans)
