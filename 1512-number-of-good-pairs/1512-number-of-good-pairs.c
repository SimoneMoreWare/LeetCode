

int numIdenticalPairs(int* nums, int numsSize){
    int i,j,res=0;
    for(i=0;i<numsSize;i++) for(j=i+1;j<numsSize;j++) if(nums[i]==nums[j]) res++;
    return res;
}