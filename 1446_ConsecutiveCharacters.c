#include <stdio.h>
#include <string.h>
int maxPower(char * s);

int main(){
    char s[] = "ccbccbb";
    int res;
    res=maxPower(s);
    printf("%d ",res);
    return 0;
}


int maxPower(char * s){
    int i,count=1,countmax=1;
    for(i=1;i<strlen(s);i++){
        if (s[i]==s[i-1]){
            count++;
        }else{
            if(count>countmax){
                countmax=count;
            }
            count=1;
        }
    }
    if (count>countmax){
        countmax=count;
    }
    return countmax;
}
