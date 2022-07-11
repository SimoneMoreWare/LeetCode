#include <stdio.h>
#include <stdlib.h>

int isgegenere(int* nums, int numsSize);
int cmpfunc(const void* a, const void* b);

int main(){
    int nums[]={2,1,2};
    int numsSize = sizeof(nums) / sizeof(int);
    int res;
    res=isgegenere(nums, numsSize);
    printf("%d ",res);
    return 0;
}

int isgegenere(int* nums, int numsSize){
    int p2;
    int max=0;
    if (numsSize < 3)
        return 0;
    // first sort the array
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    // loop for all 3 consecutive triplets
    for (int i = 0; i < numsSize - 2; i++){
        p2=0;
        if (nums[i] + nums[i + 1] > nums[i + 2]){
            p2=nums[i]+nums[i+1]+nums[i+2];
            if(p2>max){
                max=p2;
            }
        }
    }
        // If triplet satisfies triangle condition, break
    return max;
}

int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
