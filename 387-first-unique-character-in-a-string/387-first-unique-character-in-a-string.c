

int firstUniqChar(char * s){
    int letter[26];
    int i;
    int lenght_string= (int)strlen(s);

    for(i=0;i<26;i++) letter[i]=0;

    for(i=0;i< lenght_string;i++) letter[s[i]-'a']++;

    for(i=0;i< lenght_string;i++) if(letter[s[i]-'a']==1) return i;
    
    return -1;
}