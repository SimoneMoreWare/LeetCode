class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        flag_increasing=0;
        count=0;
        arrSize=len(arr)
        if arrSize<3 : 
            return False
        else:
            for i in range(1,arrSize):
                if arr[i]==arr[i-1]: 
                    return False
                else:
                    if arr[i]>arr[i-1] and flag_increasing==0: count=count+1
                    if (i+1)!=arrSize and arr[i]>arr[i+1] and count!=0: flag_increasing=1
                    if flag_increasing==1 and arr[i]<arr[i-1]: count=count+1

            if count==(arrSize-1) and flag_increasing==1:
                return True
            else:
                return False
