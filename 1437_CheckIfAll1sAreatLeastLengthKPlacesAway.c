bool kLengthApart(int* nums, int numsSize, int k){
    int i, count_zero=0,count_one=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==0){
            count_zero++;
        }else{
            count_one++;
            if(count_zero<k && count_one>1) return false;
            count_zero=0;
        }
    }
    return true;
}
