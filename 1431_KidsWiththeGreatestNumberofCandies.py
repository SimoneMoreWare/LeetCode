class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxCandies=max(candies)
        result=[]
        for value in candies:
            if value+extraCandies>=maxCandies:
                result.append(True)
            else:
                result.append(False)
        return (result)
