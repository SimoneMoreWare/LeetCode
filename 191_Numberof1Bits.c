#include <stdio.h>

int hammingWeight(int n);

int main(){
    int n = 00000000000000000000000000001011;
    int res;
    res= hammingWeight(n);
    printf("%d ",res);
    return 0;
}

int hammingWeight(int n){
    int ans=0;
    while(n!=0)
    {
        ans=ans+(n%2);//vedo per quante volte si può dividere per 2
        n=n/2;//divido n per 2
    }
    return ans;
}
