unsigned int powerOfTwo(int exponent) {
    if (exponent < 0) {
        // Gli esponenti negativi non sono gestiti in questa implementazione
        return 0;
    }

    return 1 << exponent;
}

int findComplement(int num){

    int exponent = 0;
    int cpyNum = num;
    int res = 0;
    while(cpyNum!=0){
        if(cpyNum%2==0) res = res + powerOfTwo(exponent);
        cpyNum = cpyNum/2;
        exponent++;
    }
    return res;
}

/*

*/
