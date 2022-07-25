#include <stdio.h>

int heightChecker(int* heights, int heightsSize);
void countingsort(int* heights,int heightsSize);
int main(){
    int heights[]={1,1,4,2,1,3};
    int heightsSize=6;
    int res;
    res= heightChecker(heights,heightsSize);
    printf("%d ",res);
    return 0;
}

int heightChecker(int* heights, int heightsSize){
    int i; int cpy[100]; int count=0;
    for(i=0;i<heightsSize;i++) cpy[i]=heights[i];
    countingsort(heights,heightsSize);
    for(i=0;i<heightsSize;i++){
        if(heights[i]!=cpy[i]) count++;
    }
    return count;
}

void countingsort(int* heights,int heightsSize){
    int i;
    int b[100];
    int ris[100];
    for(i=0;i<100;i++) b[i]=0;

    for(i=0;i<heightsSize;i++) b[heights[i]]++;

    for(i=1;i<100;i++) b[i]=b[i]+b[i-1];

    for(i=heightsSize-1;i>=0;i--){
        ris[b[heights[i]]-1]=heights[i];
        b[heights[i]]--;
    }

    for(i=0;i<heightsSize;i++){
        heights[i]=ris[i];
    }
}
