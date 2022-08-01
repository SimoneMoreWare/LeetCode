#include <stdio.h>

int maxProfit(int* prices, int pricesSize);

int main(){
    int prices[]={3,2,6,5,0,3};
    int pricesSize=5;
    int res;
    res=maxProfit(prices,pricesSize);
    printf("%d ",res);
    return 0;
}


int maxProfit(int* prices, int pricesSize){
    int max=-1,min=10001,profit=0,i,rmbmin;
    for(i=0;i<pricesSize;i++){
        if(prices[i]<min && i!=(pricesSize-1)){
            min=prices[i];
            rmbmin=i;
            max=-1;
        }else if(prices[i]>max && i>rmbmin){
            max=prices[i];
            if((max-min)>profit){
                profit=max-min;
            }
        }
    }
    return profit;
}
