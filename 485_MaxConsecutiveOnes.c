#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize);

int main(){
    int nums[] = {1,1,0,1,1,1};
    int numsSize = 6;
    int res;
    res= findMaxConsecutiveOnes(nums,numsSize);
    printf("%d ",res);
    return 0;
}

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int count=0;
    int max=0;
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]==1){
            count++;
            if(count>max){
                max=count;
            }
        }else{
            count=0;
        }
    }
    return max;
}

