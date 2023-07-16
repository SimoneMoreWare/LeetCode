int differenceOfSum(int* nums, int numsSize){

    int elementSum = 0;
    int digitSum = 0;
    int i;
    int copyNum;

    for(i=0; i<numsSize; i++){

        elementSum = elementSum + nums[i];

        copyNum = nums[i];

        while(copyNum!=0){

            digitSum = digitSum + copyNum%10;
            copyNum = copyNum/10;

        }

    }

    if(elementSum - digitSum < 0) return 0-(elementSum-digitSum);

    return elementSum - digitSum;

}

/*
https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
2535-DifferenceBetweenElementSumandDigitSumofanArray

*/
