class Solution:
    def sortEvenOdd(self, nums: List[int]) -> List[int]:
        nums_odd=nums[::2]
        nums_even=nums[1::2]
        nums_odd.sort()
        nums_even.sort()
        nums_even=nums_even[::-1]
        res=[]

        for i in range(len(nums_odd)):
            res.append(nums_odd[i])
            if(i<len(nums_even)):
                res.append(nums_even[i])

        return (res)
