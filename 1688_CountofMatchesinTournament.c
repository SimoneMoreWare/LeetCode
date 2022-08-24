#include <stdio.h>

int numberOfMatches(int team);
int main(){
    int team=14;
    int res;
    res= numberOfMatches(team);
    printf("%d ",res);
    return 0;
}

int numberOfMatches(int team){
    int countmatches=0,matches;
    while(team!=1){
        if(team%2!=0){
            matches=(team-1)/2;
            team=(team-1)/2+1;
        }else{
            matches=team/2;
            team=team/2;
        }
        countmatches=countmatches+matches;
    }
    return countmatches;
}
