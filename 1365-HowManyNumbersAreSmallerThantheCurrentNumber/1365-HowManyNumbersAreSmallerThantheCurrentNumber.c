

/**
 * Note: The returned array must be malloced, assume caller calls free().
 https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){

    int tmp[101];
    int i;
    (*returnSize) = numsSize;
    int *res = (int*) malloc(numsSize*sizeof(int));

    for(i=0;i<101;i++) tmp[i] = 0;

    for(i=0;i<numsSize;i++) tmp[nums[i]]++;

    for(i=1;i<101;i++) tmp[i] = tmp[i] + tmp[i-1];

    for(i=0;i<numsSize;i++){
        if(tmp[nums[i]]==0 || nums[i]==0) res[i]=0;
        else res[i] = tmp[nums[i]-1];
    }

    return res;
    
}
