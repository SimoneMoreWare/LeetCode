int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int res = 0;
    int i;

    for(i=0;i<hoursSize;i++) if(hours[i]>=target) res++;
    
    return res;
}

/*
2798-NumberofEmployeesWhoMettheTarget
https://leetcode.com/problems/number-of-employees-who-met-the-target/
*/
