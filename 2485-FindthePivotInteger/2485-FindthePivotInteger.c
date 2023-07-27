int pivotInteger(int n){

    int i;
    int j;
    int sum1;
    int sum2;

    for(i=1;i<=n;i++){
        sum1=0;
        sum2=0;
        for(j=0;j<=i;j++) sum1=sum1+j;
        for(j=i;j<=n;j++) sum2=sum2+j;
        if(sum1==sum2) return i;
    }

    return -1;

}

/*
2485-FindthePivotInteger
https://leetcode.com/problems/find-the-pivot-integer/description/
*/
