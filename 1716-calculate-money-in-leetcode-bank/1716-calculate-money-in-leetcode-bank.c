int somma(int n){
    int i;
    int numbers[]={1,2,3,4,5,6,7};
    int somma=0;
    for(i=0;i<n;i++){
        somma=somma+numbers[i];
    }
    return somma;
}

int totalMoney(int n){
    return (28*(n/7))+(7*(((n/7-1)*(n/7))/2))+somma(n%7)+((n%7)*(n/7));
}

