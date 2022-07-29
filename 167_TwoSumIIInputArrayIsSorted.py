class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        index=[]
        start=0
        end=len(numbers)-1
        for i in range(len(numbers)):
            diff=target-(numbers[start]+numbers[end])
            if diff==0:
                index.append(start+1)
                index.append(end+1)
                return index
            elif diff>0:
                start=start+1
            elif diff<0:
                end=end-1
