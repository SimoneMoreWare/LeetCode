nums1 = [1,2,3,0,0,0]
nums2 = [2,5,6]
m=3
n=3

nums1=nums1[0:m]+nums2
#shell sort
gap=1
while(gap<(n+m)/3):
    gap=3*gap+1

while(gap>=1):
    for i in range(gap,n+m):
        tmp=nums1[i]
        j=i-gap
        while(j>=0 and tmp<nums1[j]):
            nums1[j+gap]=nums1[j]
            j=j-gap
        nums1[j+gap]=tmp
    gap=int(gap/3)

print(nums1)
