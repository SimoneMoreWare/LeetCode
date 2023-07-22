int maximizeSum(int* nums, int numsSize, int k){

    int maximum = 0;
    int i;
    for(i=0;i<numsSize;i++) if(nums[i]>maximum) maximum = nums[i];
    return ((double)((k-1)*0.5) + maximum ) * k;
}

/*
2656-MaximumSumWithExactlyKElements
https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/description/
*/
