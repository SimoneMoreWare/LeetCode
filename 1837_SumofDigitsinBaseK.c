#include <stdio.h>


int sumBase(int n, int k);

int main(){
    int n=34;
    int k=6;
    int res;
    res=sumBase(n,k);
    printf("%d ",res);
    return 0;
}


int sumBase(int n, int k){
    int res=0;
    while(n>=1){
        res=res+n%k;
        n=n/k;
    }
    return res;
}
