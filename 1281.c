#include <stdio.h>

int subtractProductAndSum(int n);

int main(){
    int n=705;
    int res;
    res= subtractProductAndSum(n);
    printf("%d ",res);
    return 0;
}

int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1;

    while (n > 0) {
        int temp = n % 10; // for example  n = 1223 then after n % 10 we get last digit '3'
        sum += temp; // (sum = sum + temp;) so then sum = 0 + 3 => sum = 3;
        product *= temp;// (product = product * temp;) product = 1 * 3 => 3;
        n /= 10; // (n = n / 10;) then we divide n = 1223 / 10 => 122, n = 122
    }

    return product - sum;
}
