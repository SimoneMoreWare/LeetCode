void reverseString(char* s, int sSize){
    int i,end=sSize-1,start=0;
    char tmp;
    for (i=0;i<sSize/2;i++){
        tmp=s[start];
        s[start]=s[end];
        s[end]=tmp;
        start++;
        end--;
    }
}
