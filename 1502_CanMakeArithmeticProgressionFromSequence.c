#include <stdio.h>
#include <stdbool.h>

bool canMakeArithmeticProgression(int* arr, int arrSize);
void shellsort(int *arr,int arrSize);
int main(){
    int arr[]={1,2,4};
    int arrSize=3;
    bool res;
    res= canMakeArithmeticProgression(arr,arrSize);
    printf("%d ",res);
    return 0;
}

bool canMakeArithmeticProgression(int* arr, int arrSize){
    int i, diff;
    shellsort(arr,arrSize);
    diff=arr[1]-arr[0];
    for(i=2;i<arrSize;i++){
        if((arr[i]-arr[i-1])!=diff) return false;
    }
    return true;
}

void shellsort(int *arr,int arrSize){
    int i,j,gap=1,tmp;
    while(gap<arrSize/3){
        gap=3*gap+1;
    }
    while(gap>=1){
        for(i=gap;i<arrSize;i++){
            tmp=arr[i];
            j=i-gap;
            while(j>=0 && tmp<arr[j]){
                arr[j+gap]=arr[j];
                j=j-gap;
            }
            arr[j+gap]=tmp;
        }
        gap=gap/3;
    }
}
