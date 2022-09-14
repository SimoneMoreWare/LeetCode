int valoreassoluto(int number){
    if(number<0) return number*(-1);
    return number;
}

int getMinDistance(int* nums, int numsSize, int target, int start){
    int min_distance=10001;
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target && (valoreassoluto(i-start))<min_distance) min_distance=valoreassoluto(i-start);
    }
    return min_distance;
}

