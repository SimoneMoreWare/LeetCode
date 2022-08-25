#include <stdio.h>

int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize);
void countingsort(int* array,int arraySize);
int main(){
    int seats[]={3,1,5};
    int seatsSize=3;
    int students[]={2,7,4};
    int studentsSize=3;
    int res;
    res=minMovesToSeat(seats,seatsSize,students,studentsSize);
    printf("%d ",res);
    return 0;
}

int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize){
    int i,count=0,diff;
    countingsort(seats,seatsSize);
    countingsort(students,studentsSize);
    for(i=0;i<studentsSize;i++){
        diff=students[i]-seats[i];
        if(diff<0) diff=diff*(-1);
        count=count+diff;
    }
    return count;
}
void countingsort(int* array,int arraySize){
    int i,b[100];
    int res[100];

    for(i=0;i<100;i++){
        b[i]=0;
    }
    for(i=0;i<arraySize;i++){
        b[array[i]]++;
    }
    for(i=1;i<100;i++){
        b[i]=b[i]+b[i-1];
    }
    for(i=arraySize-1;i>=0;i--){
        res[b[array[i]]-1]=array[i];
        b[array[i]]--;
    }

    for(i=0;i<arraySize;i++){
        array[i]=res[i];
    }

}
