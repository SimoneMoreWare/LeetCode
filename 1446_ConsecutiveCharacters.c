#include <stdio.h>

int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime);

int main(){
    int startTime[] = {1,2,3};
    int endTime[] = {3,2,7};
    int queryTime=4;
    int startTimeSize=3;
    int endTimeSize=3;
    int res;
    res=busyStudent(startTime,startTimeSize,endTime,endTimeSize,queryTime);
    printf("%d ",res);
    return 0;
}


int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime){
    int i,count=0;
    for(i=0;i<startTimeSize;i++){
        if(queryTime>=startTime[i] && queryTime<=endTime[i]){
            count++;
        }
    }
    return count;
}
