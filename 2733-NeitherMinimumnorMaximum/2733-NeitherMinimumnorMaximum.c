int findNonMinOrMax(int* nums, int numsSize){

    int max=0;
    int min=101;
    int i;

    for(i=0;i<numsSize;i++){
        if(nums[i]<min) min = nums[i];
        if(nums[i]>max) max = nums[i];
    }

    for(i=0;i<numsSize;i++) if(nums[i]!=max && nums[i]!=min) return nums[i];
    
    return -1;

}

/*
2733-NeitherMinimumnorMaximum

*/
