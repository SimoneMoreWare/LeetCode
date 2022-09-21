class Solution:
    def sumEvenAfterQueries(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        answer=[]
        somma=0
        for value in nums:
            if value%2==0:
                somma=somma+value
        for value,index in queries:
            if nums[index]%2==0:
                somma=somma-nums[index]
            nums[index]=nums[index]+value
            if nums[index]%2==0:
                somma=somma+nums[index]
            answer.append(somma)
        return answer