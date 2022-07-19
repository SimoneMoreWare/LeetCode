#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct anagram{
    int a[26];
    int b[26];
};
bool isAnagram(char * s, char * t);

int main(){
    bool res;
    char s[]="rat";
    char t[]= "car";
    res=isAnagram(s,t);
    printf("%d ",res);
    return 0;
}

bool isAnagram(char * s, char * t){
    int i;
    struct anagram anagram;
    int l1=strlen(s);
    int l2=strlen(t);
    if(l1!=l2) return false;

    for(i=0;i<26;i++){
        anagram.a[i]=0;
        anagram.b[i]=0;
    }

    for(i=0;i<l1;i++){
        anagram.a[s[i]-'a']++;
        anagram.b[t[i]-'a']++;
    }

    for(i=0;i<26;i++){
        if(anagram.a[i]!=anagram.b[i]) return false;
    }
    return true;
}
