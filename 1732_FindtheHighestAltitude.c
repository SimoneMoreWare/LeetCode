#include <stdio.h>


int largestAltitude(int* gain, int gainSize);

int main(){
    int gain[] = {-4,-3,-2,-1,4,3,2};
    int gainSize=7;
    int res;
    res=largestAltitude(gain,gainSize);
    printf("%d ",res);
    return 0;
}


int largestAltitude(int* gain, int gainSize){
    int altezze[100];
    int i;
    altezze[0]=0;
    int massimo=0;
    for(i=0;i<gainSize;i++){
        altezze[i+1]=gain[i]+altezze[i];
        if(altezze[i+1]>massimo) massimo=altezze[i+1];
    }

    return massimo;
}
