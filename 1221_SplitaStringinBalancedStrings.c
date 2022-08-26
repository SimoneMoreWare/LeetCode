#include <stdio.h>
#include <string.h>
int balancedStringSplit(char * s);

int main(){
    char s[] = "RLRRLLRLRL";
    int res;
    res=balancedStringSplit(s);
    printf("%d ",res);
    return 0;
}

int balancedStringSplit(char * s){
    int count_r=0,count_l=0,res=0,i;

    for(i=0;i<strlen(s);i++){

        if(s[i]=='R'){
            count_r++;
        }else{
            count_l++;
        }

        if(count_r==count_l){
            res++;
            count_r=0;
            count_l=0;
        }
    }

    return res;
}
