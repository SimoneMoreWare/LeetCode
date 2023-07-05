/*
2160-MinimumSumofFourDigitNumberAfterSplittingDigits
https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/description/
*/

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orderFourNumbers(int *a, int *b, int *c, int *d) {
    if (*a > *b) {
        swap(a, b);
    }

    if (*a > *c) {
        swap(a, c);
    }

    if (*a > *d) {
        swap(a, d);
    }

    if (*b > *c) {
        swap(b, c);
    }

    if (*b > *d) {
        swap(b, d);
    }

    if (*c > *d) {
        swap(c, d);
    }
}

int minimumSum(int num){
    
    int num1 = num / 1000;
    int num2 = (num%1000) / 100;
    int num3 = ( (num%1000) % 100) / 10;
    int num4 = ( ( (num%1000) % 100 ) % 10 );

    orderFourNumbers(&num1, &num2, &num3, &num4);

    return 10*num1 + num3 + 10*num2 + num4;   

}
