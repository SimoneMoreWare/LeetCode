nums=[4,3,2,7,8,2,3,1]
l=len(nums)
occorenze=[0]*l
result=[]
for i in range(l):
    occorenze[nums[i]-1]=occorenze[nums[i]-1]+1

for i in range(l):
    if occorenze[i]==0:
        result.append(i+1)

print(result)
