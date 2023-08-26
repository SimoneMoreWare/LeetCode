int binaryGap(int n){

    int cpyN = n;
    int len = 0;
    int maxLen = 0;
    int countOne = 0;
    while(cpyN!=0){

        if(cpyN%2==1){
            countOne ++;
            if(countOne==1) len = 0;
            if(countOne==2){

                if(len>=maxLen){
                    maxLen = len + 1;
                }
                len = 0;
                countOne = 0;
                if(cpyN%2==1) countOne++;
            }
        }else{
            len++;
        }
        cpyN = cpyN >> 1;
    }

    return maxLen;
    
}
