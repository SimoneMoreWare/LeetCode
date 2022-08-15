#include <stdio.h>
int maxProductDifference(int* nums, int numsSize);
int main(){
    int nums[]={4,2,5,9,7,4,8};
    int numsSize=7;
    int res;
    res= maxProductDifference(nums,numsSize);
    printf("%d ",res);
    return 0;
}

int maxProductDifference(int* nums, int numsSize) {
    int i;
    int tmp;
    int min1=10001,min2=10001,max1=0,max2=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]>max1){
            tmp=max1;
            max1=nums[i];
            max2=tmp;
        }else if(nums[i]>max2){
            max2=nums[i];
        }
        if(nums[i]<min1){
            tmp=min1;
            min1=nums[i];
            min2=tmp;
        }else if(nums[i]<min2){
            min2=nums[i];
        }
    }
    return (max1*max2)-(min2*min1);
}
