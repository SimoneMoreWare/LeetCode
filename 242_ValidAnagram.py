class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        insieme = set(nums)

        if len(nums)!=len(insieme):
            return True
        else:
            return False
