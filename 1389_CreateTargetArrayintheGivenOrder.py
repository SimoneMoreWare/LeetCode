class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        lentarget=len(nums)
        target=[101]*lentarget
        for i in range(lentarget):
            if target[index[i]]==101:
                target[index[i]]=nums[i]
            else:
                tmp=target[index[i]:(lentarget-1)]
                target[index[i]]=nums[i]
                target[(index[i]+1):lentarget]=tmp

        return (target)
