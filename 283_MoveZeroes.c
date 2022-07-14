

void moveZeroes(int* nums, int numsSize){
   int i;
int count = 0;

for (i = 0; i < numsSize; i++)
{
    if(nums[i] != 0)
    {
        nums[count++] = nums[i];
    }
}
while (count < numsSize)
{
    nums[count++] = 0;
}
    
}
