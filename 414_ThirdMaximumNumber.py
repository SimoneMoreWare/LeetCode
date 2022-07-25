class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums=list(set(nums))
        l=len(nums)
        if l==2:
            return max(nums)
        elif l==1:
            return nums[0]
        
        maxorder=sorted(nums[:3])
        max1=maxorder[2]
        max2=maxorder[1]
        max3=maxorder[0]
        
        for i in range(3, l):
            if nums[i] > max1:
                tmp1=max1
                tmp2=max2
                max1 = nums[i]
                max2=tmp1
                max3=tmp2
            elif nums[i] > max2:
                tmp2=max2
                max2 = nums[i]
                max3=tmp2
            elif nums[i] > max3:
                max3 = nums[i]
                
        return max3
