#include <stdio.h>

int countOperations(int num1, int num2);

int main(){
    int num1=10,num2=10;
    int res;
    res= countOperations(num1,num2);
    printf("%d ",res);
    return 0;
}

int countOperations(int num1, int num2){
    int count=0;

    while(num1!=0 && num2!=0){
        if (num1 >= num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
        count++;
    }

    return count;
}
