char * makeSmallestPalindrome(char * s){

    int i;
    int lenght = strlen(s);

    for(i=0;i<lenght/2;i++){
        if(s[i]!=s[lenght-i-1]){
            if(s[i]<s[lenght-i-1]){
                s[lenght-i-1]=s[i];
            }else{
                s[i]=s[lenght-i-1];
            }
        }
    }

    return s;

}

/*
2697-LexicographicallySmallestPalindrome
https://leetcode.com/problems/lexicographically-smallest-palindrome/description/
*/
