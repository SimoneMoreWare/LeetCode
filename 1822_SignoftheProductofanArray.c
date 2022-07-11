#include <stdio.h>
int arraySign(int* nums, int numsSize);

int main(){
    int nums[]={9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24};
    int numsSize=13;
    int res;
    res= arraySign(nums,numsSize);
    printf("%d ",res);
    return 0;
}
int arraySign(int* nums, int numsSize){
    int countn=0;
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]!=0){
            if(nums[i]<0){
                countn++;
            }
        }else{
            return 0;
        }
    }
    if(countn%2==0){
        return 1;
    }else{
        return -1;
    }int countn=0;
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]!=0){
            if(nums[i]<0){
                countn++;
            }
        }else{
            return 0;
        }
    }
    if(countn%2==0){
        return 1;
    }else{
        return -1;
    }

}
