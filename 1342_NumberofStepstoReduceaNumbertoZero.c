#include <stdio.h>


int numberOfSteps(int num);
int main(){
    int num=123;
    int res;
    res= numberOfSteps(num);
    printf("%d ",res);
    return 0;
}

int numberOfSteps(int num){
    int count=0;
    while(num!=0){
        if(num%2==0){
            num=num/2;
        }else{
            num=num-1;
        }
        count++;
    }
    return count;
}
