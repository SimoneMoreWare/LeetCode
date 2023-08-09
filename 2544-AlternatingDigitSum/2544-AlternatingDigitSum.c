int alternateDigitSum(int n){

    int res = 0;
    int count = 0;
    int cpyN = n;

    while(cpyN!=0){
        cpyN=cpyN/10;
        count++;
    }

    cpyN = n;

    while(cpyN!=0){

        if(count%2==0) res = res - cpyN%10;
        else res = res + cpyN%10;

        cpyN=cpyN/10;

        count--;

    }

    return res;

}

//2544. Alternating Digit Sum
