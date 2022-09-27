struct countword{
    int letter[26];
};

int firstUniqChar(char * s){
    struct countword countword;
    int i;
    int lenght_string= (int)strlen(s);

    for(i=0;i<26;i++) countword.letter[i]=0;

    for(i=0;i< lenght_string;i++) countword.letter[s[i]-'a']++;

    for(i=0;i< lenght_string;i++) if(countword.letter[s[i]-'a']==1) return i;
    
    return -1;
}