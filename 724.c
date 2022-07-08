#include <stdio.h>
int pivotIndex(int *nums,int numsize);
int sumtot(int *nums,int numsize);
int main(){
    int nums[]={2,1,-1};
    int numsize=3;
    int res;
    res=pivotIndex(nums,numsize);
    printf("The pivot index is %d",res);
    return 0;
}
int pivotIndex(int *nums,int numsize){
    int i;
    int sum_t;
    int sumdx;
    int sumsx=0;
    sum_t=sumtot(nums,numsize);
    for(i=0;i<numsize;i++){
        sumdx=sum_t-nums[i]-sumsx;
        if(sumsx==sumdx){
            return i;
        }
        sumsx=sumsx+nums[i];
    }
    return -1;
}
int sumtot(int *nums,int numsize){
    int sum=0;
    int i;
    for(i=0;i<numsize;i++){
        sum=sum+nums[i];
    }
    return sum;
}
