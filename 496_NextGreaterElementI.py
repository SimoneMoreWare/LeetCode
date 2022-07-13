class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans=[]
        for i in range(0,len(nums1)):
            flag=1
            rmb=-1
            for j in range(0,len(nums2)):
                if(nums1[i]==nums2[j] and flag==1):
                    flag=0
                else:
                    if(nums2[j]>nums1[i] and flag==0):
                        rmb=nums2[j]
                        flag=2
            ans.append(rmb)
        return ans
