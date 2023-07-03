/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int absolute_value_difference(int leftSum, int rightSum){
    int diff = leftSum - rightSum;
    if(diff<0) diff = 0 - diff;
    return diff;
}

int* leftRightDifference(int* nums, int numsSize, int* returnSize){

    int i;
    int leftSum;
    int rightSum;
    int j;

    int *answer = (int *) malloc(numsSize*sizeof(int));

    (*returnSize) = numsSize;

    for(i=0;i<numsSize;i++){

        leftSum = 0;
        rightSum = 0;

        for(j=0;j<numsSize;j++){
            
            if(j<i){
                leftSum = leftSum + nums[j];
            }else if(j>i){
                rightSum = rightSum + nums[j];
            }

        }

        answer[i] = absolute_value_difference(leftSum,rightSum);

    }

    return answer;


}

//https://leetcode.com/problems/left-and-right-sum-differences/description/
