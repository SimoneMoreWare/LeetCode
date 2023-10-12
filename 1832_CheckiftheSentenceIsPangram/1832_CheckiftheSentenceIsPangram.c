bool checkIfPangram(char * sentence){

    if(strlen(sentence)<26) return false;

    int check[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i;

    for(i=0;i<strlen(sentence);i++){
        check[sentence[i]-'a'] = 1;
    }

    for(i=0;i<26;i++) if(check[i]==0) return false;

    return true;

}
