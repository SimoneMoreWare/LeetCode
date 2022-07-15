int diagonalSum(int** mat, int matSize, int *matColSize){
    int i,sum=0;
    for(i=0;i<*matColSize;i++){
        sum=sum+mat[i][i];
        mat[i][i]=0;
        sum=sum+mat[i][*matColSize-i-1];
        mat[i][*matColSize-i-1]=0;
    }
    return sum;
}
