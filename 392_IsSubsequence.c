#include <stdio.h>
#include <string.h>

int isSubsequence(char *s,char *t);

int main(){
    char s[]="aec";
    char t[]="abcdeefc";
    int res;
    res= isSubsequence(s,t);
    printf("%d ",res);
    return 0;
}
int isSubsequence(char *s,char *t){
    int ls=strlen(s);
    int lt=strlen(t);
    int i;
    int k=0;
    for(i=0;i<lt;i++){
        if(t[i]==s[k] && k<ls){
            k++;
        }
    }
    if(k==ls){
        return 1;
    }else{
        return 0;
    }
}
