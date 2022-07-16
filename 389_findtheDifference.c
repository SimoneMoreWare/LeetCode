struct let{
    int a[26];
    int b[26];
};

char findTheDifference(char * s, char * t){
    int i;
    struct let let;
    for(i=0;i<26;i++){
           let.a[i]=0;
           let.b[i]=0;
    }
    for(i=0;i<strlen(t);i++){
        if(i!=strlen(t)-1){
            let.a[s[i]-'a']++;
            let.b[t[i]-'a']++;
        }else{
            let.b[t[i]-'a']++;
        }
    }
    for(i=0;i<26;i++){
        if(let.a[i]!=let.b[i]){
            return i+97;
        }
    }
    return t[strlen(t)-1];
}
