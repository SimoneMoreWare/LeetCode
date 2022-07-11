int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize){
    int i;
    int min=10000;
    int ricordaindice=-1;
    //trovo coppie valide
    for(i=0;i<pointsSize;i++){
        if(points[i][0]==x || points[i][1]==y){
            if((abs(points[i][0]-x)+abs(points[i][1]-y))<min){
                min=abs(points[i][0]-x)+abs(points[i][1]-y);
                ricordaindice=i;
            }
        }
    }
    return ricordaindice;
}
