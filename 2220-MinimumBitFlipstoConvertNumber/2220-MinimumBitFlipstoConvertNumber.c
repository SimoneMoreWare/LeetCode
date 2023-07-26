int minBitFlips(int start, int goal){

    int res = 0;
    int flag = 1;

    while(flag){
        
        if(start%2!=goal%2) res++;

        if(start!=0) start = start / 2;
        if(goal!=0) goal = goal / 2;
        if(goal==0 && start==0) flag=0;

    } 

    return res;

}

/*
2220-MinimumBitFlipstoConvertNumber
https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
*/
