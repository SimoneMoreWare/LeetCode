#include <stdio.h>
#include <stdbool.h>

bool checkStraightLine(int coordinates[][2], int coordinatesSize);

int main(){
    int coordinates[][2]={{-4,-3},{1,0},{3,-1},{0,-1},{-5,2}};
    int coordinatesSize=5;
    bool res;
    res=checkStraightLine(coordinates,coordinatesSize);
    printf("%d ",res);
    return 0;
}

bool checkStraightLine(int coordinates[][2], int coordinatesSize) {
    int i;
    double m;
    if ((coordinates[1][0] - coordinates[0][0]) != 0){
        m = ((double)(coordinates[1][1] - coordinates[0][1]) / (double)(coordinates[1][0] - coordinates[0][0]));
    }else{
        m=20000;
    }
    for(i=2;i<coordinatesSize;i++){
        if(coordinates[i][0]-coordinates[i-1][0]!=0){
            if((float)((double)(coordinates[i][1]-coordinates[i-1][1])/(coordinates[i][0]-coordinates[i-1][0]))!=m){
                return false;
            }
        }else{
            if(m!=20000) return false;
        }

    }
    return true;
}
