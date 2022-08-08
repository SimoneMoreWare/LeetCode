#include <stdio.h>

int findLengthOfLCIS(int* nums, int numsSize);

int main(){
    int nums[]={1,3,5,4,2,3,4,5};
    int numsSize=8;
    int res;
    res= findLengthOfLCIS(nums,numsSize);
    printf("%d ",res);
    return 0;
}

int findLengthOfLCIS(int* nums, int numsSize){
    int i,countmax=0,count=1;
    for(i=1;i<numsSize;i++){
        if(nums[i]>nums[i-1]){
            count++;
        }else{
            if(count>countmax) countmax=count;
            count=1;
        }
    }
    if (count>countmax) countmax=count;
    return countmax;
}
