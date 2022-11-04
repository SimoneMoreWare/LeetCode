
int lengthOfLIS(int* nums, int numsSize){
    int i,j;
    int *L;
    int massimo=0;
    L=(int*) malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++) L[i]=1;

    for(i=0;i<numsSize;i++){
        for(j=0;j<i;j++){
            if(nums[j]<nums[i] && L[i]<L[j]+1){
                L[i]++;
                if(L[i]>massimo){
                    massimo=L[j];
                }
            }
        }
    }
    return massimo+1;

    
}
