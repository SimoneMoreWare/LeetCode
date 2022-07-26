#include <stdio.h>

int dominantIndex(int* nums, int numsSize);

int main(){
    int nums[]={3,6,1,0};
    int numsSize=4;
    int res;
    res= dominantIndex(nums,numsSize);
    printf("%d ",res);
    return 0;
}

int dominantIndex(int* nums, int numsSize){
    int i,max1,max2,tmp,maxindex;
    if(nums[0]>nums[1]){
        max1=nums[0];
        max2=nums[1];
        maxindex=0;
    }else{
        max1=nums[1];
        max2=nums[0];
        maxindex=1;
    }
    for(i=2;i<numsSize;i++){
        if(nums[i]>max1){
            tmp=max1;
            max1=nums[i];
            max2=tmp;
            maxindex=i;
        }else if(nums[i]>max2){
            max2=nums[i];
        }
    }
    if(max1>=2*max2){
        return maxindex;
    }else{
        return -1;
    }
}
