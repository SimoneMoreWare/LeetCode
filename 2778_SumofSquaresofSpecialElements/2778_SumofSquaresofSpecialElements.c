int sumOfSquares(int* nums, int numsSize){

    int i;
    int res = 0;

    for(i=1;i<=numsSize;i++){
        if(numsSize%i==0) res = res + nums[i-1]*nums[i-1]; 
    }

    return res;

}

/*
2778_SumofSquaresofSpecialElements
*/
