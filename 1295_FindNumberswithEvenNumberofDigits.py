class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        nums=list(map(str, nums))
        count=0
        for value in nums:
            if len(value)%2==0:
                count=count+1

        return count
        
        
