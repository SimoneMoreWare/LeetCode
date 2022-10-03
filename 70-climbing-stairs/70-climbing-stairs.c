

int climbStairs(int n){
    double sqrt5 = sqrt(5);
    n++;
    int F_n = ( pow((1 + sqrt5), n) - pow((1 - sqrt5), n) ) / ( pow(2, n) * sqrt5 );

    return F_n;
}