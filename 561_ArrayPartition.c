int arrayPairSum(int* nums, int numsSize){
    int i,sum=0;
    shellsort(nums,numsSize);
    for(i=0;i<numsSize;i=i+2){
        sum=sum+nums[i];
    }
    return sum;
}

void shellsort(int* nums, int numsSize){
    int i,j,gap=1,tmp;
    while(gap<numsSize/3){
        gap=3*gap+1;
    }
    while(gap>=1){
        for(i=gap;i<numsSize;i++){
            tmp=nums[i];
            j=i-gap;
            while(j>=0 && tmp<nums[j]){
                nums[j+gap]=nums[j];
                j=j-gap;
            }
            nums[j+gap]=tmp;
        }
        gap=gap/3;
    }
}
