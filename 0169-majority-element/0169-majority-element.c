int majorityR(int *a,int l,int r,int numberofmajor){

    int countSx=0,countDx=0;
    int tmpSx=a[l],tmpDx=a[r];
    int i=l,j=r;
    
    if(numberofmajor==0) return a[0];
    if(l>=r) return -1;

    while(i<=j){
        if (a[i]==tmpDx) countDx++;
        else if (a[i]==tmpSx) countSx++;

        if (a[j]==tmpDx) countDx++;
        else if (a[j]==tmpSx) countSx++;

        i++;
        j--;
    }

    if(countDx>numberofmajor) return tmpDx;
    if(countSx>numberofmajor) return tmpSx;

    return majorityR(a,++l,--r,numberofmajor);
}

int majorityElement(int* nums, int numsSize){
    return majorityR(nums,0,numsSize-1,numsSize/2);
}

