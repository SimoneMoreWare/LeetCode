/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize){

    int *res = (int*)malloc(2*sizeof(int));
    int cpyN = n;
    int count = 0;
    int odd = 0;
    int even = 0;
    *returnSize = 2;

    while(cpyN!=0){

        if(cpyN%2==1){
            if(count%2==0) even++;
            else odd++;
        }

        cpyN=cpyN/2;
        count++;
    }

    res[1] = odd;
    res[0] = even;

    return res;

}

//2595-NumberofEvenandOddBits
