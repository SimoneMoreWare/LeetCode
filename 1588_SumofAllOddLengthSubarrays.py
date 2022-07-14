class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        sum_t=0
        for i in range(0,len(arr),2):
            for j in range(0,len(arr)-i):
                sum_t=sum_t+sum(arr[j:j+i+1])
                
        return sum_t
