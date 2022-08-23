char * restoreString(char * s, int* indices, int indicesSize){
    int i;
    char *result=malloc(indicesSize+1*sizeof(char));
    strcpy(result,s);
    for(i=0;i<indicesSize;i++){
        result[indices[i]]=s[i];
    }
    return result;
}
