

double trimMean(int* arr, int arrSize){
    int i;
    int somma=0;
    countingsort(arr,arrSize);
    for(i=arrSize/20;i<arrSize-arrSize/20;i++) somma=somma+arr[i];
    return (double)somma/(arrSize-2*arrSize/20);
}

void countingsort(int arr[],int arrSize){
    int i;
    int b[100001],res[100001];
    for(i=0;i<100001;i++) b[i]=0;
    for(i=0;i<arrSize;i++) b[arr[i]]++;
    for(i=1;i<100001;i++) b[i]=b[i]+b[i-1];
    for(i=arrSize-1;i>=0;i--){
        res[b[arr[i]]-1]=arr[i];
        b[arr[i]]--;
    }
    for(i=0;i<arrSize;i++) arr[i]=res[i];
}