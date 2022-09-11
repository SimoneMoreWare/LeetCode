int valoreassoluto(int number){
    if(number<0) return number*(-1);
    return number;
}

int findClosestNumber(int* nums, int numsSize){
    int i,min_distance=100001;
    for(i=0;i<numsSize;i++) if(valoreassoluto(nums[i])<=valoreassoluto(min_distance) && min_distance!= valoreassoluto(nums[i])) min_distance=nums[i];
    return min_distance;
}

