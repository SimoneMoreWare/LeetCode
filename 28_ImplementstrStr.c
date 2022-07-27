int strStr(char * haystack , char * needle ){
    int i, lun_s, lun_c;
    lun_s=strlen(haystack );
    lun_c=strlen(needle );
    for (i=0; i<=lun_s-lun_c; i++) if (strncmp(&haystack[i],needle ,lun_c)==0) return (i);
    return -1;
}
