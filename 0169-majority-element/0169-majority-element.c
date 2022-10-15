int countInRange(int a[], int num, int l, int r) {
        int count = 0;
        for (int i = l; i <= r; i++) {
            if (a[i] == num) {
                count++;
            }
        }
        return count;
}

int majorityR(int *a,int l,int r){
   
    int m=(r-l)/2+l;
    int left,right;
    int leftCount,rightCount;
    
    if(l==r) return a[l];
    
    left=majorityR(a,l,m);
    right=majorityR(a,m+1,r);
    
    if(left==right) return left;
    
    leftCount=countInRange(a,left,l,r);
    rightCount=countInRange(a,right,l,r);
    
    return leftCount > rightCount ? left : right;
    
    
}

int majorityElement(int* nums, int numsSize){
    return majorityR(nums,0,numsSize-1);
}

