int hammingDistance(int x, int y){

    int res = 0;
    int flag = 1;
    
    while(flag){
        
        if(x%2==0 && y%2==1) res++;
        if(x%2==1 && y%2==0) res++;
        if(x!=0) x = x / 2;
        if(y!=0) y = y / 2;
        if(y==0 && x==0) flag=0;

    } 

    return res;

}

/*
https://leetcode.com/problems/hamming-distance/submissions/
461-HammingBitDistance
*/
