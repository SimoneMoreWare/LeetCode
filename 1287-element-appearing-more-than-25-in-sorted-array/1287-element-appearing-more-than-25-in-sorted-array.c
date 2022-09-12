

int findSpecialInteger(int* arr, int arrSize){
    int range25=(int)arrSize*0.25;
    int i;
    int count=0;
    int rmb;
    for(i=1;i<arrSize;i++){
        if(arr[i]==arr[i-1]){
            count++;
            if(count>=range25) rmb=arr[i];
        }else{
            count=0;
        }
    }
    return rmb;
}