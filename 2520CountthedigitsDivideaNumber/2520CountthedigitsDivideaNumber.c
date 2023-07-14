int countDigits(int num){
    
    int res = 0;
    int numCopy = num;

    while ( numCopy != 0) {

        if( num % (numCopy % 10) == 0 ) res++;

        numCopy = numCopy / 10;

    }

    return res;

}

/*

2520CountthedigitsDivideaNumber
https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
*/
