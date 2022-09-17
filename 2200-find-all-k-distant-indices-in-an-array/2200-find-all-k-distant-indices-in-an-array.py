class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
        res=[]
        indexkey=[]
        for i in range(len(nums)):
            if nums[i]==key: indexkey.append(i)

        for i in range(len(nums)):
            for key in indexkey:
                if abs(i-key)<=k:
                    res.append(i)
        return list(set(res))