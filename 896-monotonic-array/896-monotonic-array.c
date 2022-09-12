

bool isMonotonic(int* nums, int numsSize){
    int i,count_increasing=0,count_decreasing=0;
    for(i=1;i<numsSize;i++){
        if(nums[i]>=nums[i-1]) count_increasing++;
        if(nums[i]<=nums[i-1]) count_decreasing++;
    }
    if(count_increasing==numsSize-1 || count_decreasing==numsSize-1) return true;
    return false;
}