#include <stdio.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize);

int main(){
    int arr[]={-2,0,10,-19,4,6,-8};
    int arrSize=7;
    int res;
    res= checkIfExist(arr,arrSize);
    printf("%d ",res);
    return 0;
}


bool checkIfExist(int* arr, int arrSize){
    int i,j,tmp;
    for(i=0;i<arrSize;i++){
        if(arr[i]%2==0){
            tmp=arr[i]/2;
            for(j=0;j<arrSize;j++){
                if(tmp==arr[j]) return 1;
            }
        }
    }
    return 0;
}
