#include <stdio.h>
#include <string.h>
int countAsterisks(char * s);

int main(){
    char s[] =  "yo|uar|e**|b|e***au|tifu|l";
    int res;
    res=countAsterisks(s);
    printf("%d ",res);
    return 0;
}

int countAsterisks(char * s){
    int i,asteriks=0,res=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]=='|') {
            asteriks++;
            asteriks = asteriks % 2;
        }else if(s[i]=='*' && asteriks==0){
            res++;
        }
    }
    return res;
}
