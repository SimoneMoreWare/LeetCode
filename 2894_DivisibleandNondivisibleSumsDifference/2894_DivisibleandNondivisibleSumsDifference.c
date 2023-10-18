int differenceOfSums(int n, int m) {

    int i;
    int res = 0;
    for(i=1;i<=n;i++){
        if(i%m!=0) res = res + i;
        else res = res - i;
    }

    return res;
}
