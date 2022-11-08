#include <stdio.h>
#include <string.h>

#define MAXN 4
#define MAXS 256

typedef struct{
    int n;
    char lettere[4];
}tasto;

void prinmolt(int pos, tasto *tasti, char *sol, int n, char *input);

int main(){
    tasto tasti[8]={
            2,"abc",
            3,"def",
            4,"ghi",
            5,"jkl",
            6,"mno",
            7,"pqrs",
            8,"tuv",
            9,"wxyz"
    };
    char input[MAXN];
    int pos=0;
    char sol[MAXS];
    int n;
    scanf("%s",input);
    n=(int)strlen(input);
    prinmolt(pos,tasti,sol,n,input);
    return 0;
}

void prinmolt(int pos, tasto *tasti, char *sol, int n, char *input){
    int i;
    if(pos>=n){
        for(i=0;i<n;i++) printf("%c",sol[i]);
        printf("\n");
        return;
    }
    for(i=0;i<strlen(tasti[pos].lettere);i++){
        sol[pos]=tasti[input[pos]-'0'-2].lettere[i];
        prinmolt(pos+1,tasti,sol,n,input);
    }

}
