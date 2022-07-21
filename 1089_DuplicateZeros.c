#include <stdio.h>

void duplicateZeros(int* arr, int arrSize);

int main(){
    int arr[] = {1,2,3};
    int arrSize=3;
    duplicateZeros(arr,arrSize);
    return 0;
}




void duplicateZeros(int* arr, int arrSize){
    int i,j;
    for(i=0;i<arrSize;i++){
        if(arr[i]==0) {
            for (j = arrSize - 1; j > i; j--) {
                arr[j]=arr[j-1];
            }
            i=i+1;
        }
    }
}
