int sumOfMultiples(int n){

    int res = 0;
    int i;

    for(i=1;i<=n;i++){
        if(i%3==0 || i%5==0 || i%7==0) res = res + i;
    }

    return res;

}

//https://leetcode.com/problems/sum-multiples/description/
