#include <stdio.h>


int findGCD(int* nums, int numsSize);

int main(){
    int nums[]={3,3};
    int numsSize=2;
    int res;
    res=findGCD(nums,numsSize);
    printf("%d ",res);
    return 0;
}


int findGCD(int* nums, int numsSize){
    int i,massimo=0,minimo=1001,gcd;
    for(i=0;i<numsSize;i++){
        if(nums[i]>massimo) massimo=nums[i];
        if(nums[i]<minimo) minimo=nums[i];
    }
    for(i=1;i<=minimo && i<=massimo;++i){
        // Checks if i is factor of both integers
        if(minimo%i==0 && massimo%i==0) gcd = i;
    }
    return gcd;
}
