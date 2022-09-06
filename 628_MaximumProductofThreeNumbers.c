#include <stdio.h>

int maximumProduct(int* nums, int numsSize);

int main(){
    int nums[]={-100,-98,-1,2,3,4};
    int numsSize=6;
    int res;
    res=maximumProduct(nums,numsSize);
    printf("%d ",res);
    return 0;
}


int maximumProduct(int* nums, int numsSize){
    int i,max1=-1001,max2=-1001,max3=-1001,min1=1001,min2=1001,prodotto1,prodotto2;
    for(i=0;i<numsSize;i++){
        if(nums[i]>max1){
            max3=max2;
            max2=max1;
            max1=nums[i];
        }else if(nums[i]>max2){
            max3=max2;
            max2=nums[i];
        }else if(nums[i]>max3){
            max3=nums[i];
        }
        if(nums[i]<min1){
            min2=min1;
            min1=nums[i];
        }else if(nums[i]<min2){
            min2=nums[i];
        }
    }
    prodotto1=min1*min2*max1;
    prodotto2=max1*max2*max3;
    if(prodotto1>=prodotto2){
        return prodotto1;
    }else{
        return prodotto2;
    }
}
