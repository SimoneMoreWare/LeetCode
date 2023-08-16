/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){

    int* res = (int *) malloc((n+1)*sizeof(int));
    *returnSize = n + 1;
    int i;
    int count;
    int value;

    for(i=0;i<=n;i++){

        value = i;
        count = 0;

        while(value!=0){

            if(value%2==1) count++;

            value = value / 2;

        }

        res[i] = count;

    }

    return res;

}

//338-CountingBits.c
