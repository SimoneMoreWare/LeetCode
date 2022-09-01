#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct coordinate{
    int x;
    int y;
};
bool judgeCircle(char * moves);

int main(){
    char moves[]="LL";
    int res;
    res=judgeCircle(moves);
    printf("%d ",res);
    return 0;
}


bool judgeCircle(char * moves){
    struct coordinate coordinate;
    coordinate.x=0;
    coordinate.y=0;
    int i;
    for(i=0;i<strlen(moves);i++){
        switch(moves[i]){
            case 'U':
                coordinate.y++;
                break;
            case 'D':
                coordinate.y--;
                break;
            case 'R':
                coordinate.x++;
                break;
            case 'L':
                coordinate.x--;
                break;
        }
    }
    if(coordinate.x==0 && coordinate.y==0) return true;
    return false;
}
