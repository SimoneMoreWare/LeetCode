
bool squareIsWhite(char * coordinates){
    if((coordinates[0]-('a')+1 + coordinates[1]-'0')%2!=0) return true;
    return false;
}
