class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        b = [None] * 2 * n
        i = 0

        # Copy a[] to b[] two times
        while i < n:
            b[i] = b[n + i] = nums[i]
            i = i + 1

        i = n-k
        index=0
        # print from ind-th index to (n+i)th index.
        while i < 2*n-k:
            nums[index]=b[i]
            index=index+1
            i = i + 1