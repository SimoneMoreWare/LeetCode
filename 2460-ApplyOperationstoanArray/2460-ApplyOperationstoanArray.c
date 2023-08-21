/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize){

    int *res = (int*) malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    int i;
    int count=0;

    for(i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i] = nums[i]<<1;
            nums[i+1]=0;
        }
    }

    for(i=0;i<numsSize;i++){
        if(nums[i]!=0) res[count++] = nums[i];
    }

    for(i=count;i<numsSize;i++){
        res[i]=0;
    }



    return res;

}

/*
2460-ApplyOperationstoanArray
*/
