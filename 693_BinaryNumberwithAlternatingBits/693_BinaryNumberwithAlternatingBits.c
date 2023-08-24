bool hasAlternatingBits(int n){

    int cpyN = n;
    int oldBit = cpyN%2;
    cpyN=cpyN >> 1;

    while(cpyN!=0){

        if(cpyN%2==oldBit) return false;

        oldBit = cpyN%2;

        cpyN = cpyN >> 1; 

    }

    return true;

}

//693_BinaryNumberwithAlternatingBits
