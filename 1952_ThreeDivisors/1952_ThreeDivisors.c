bool isThree(int n){

    int count = 1;
    int i;
    int flag = 1;
    for(i=1;i<=n/2 && flag==1;i++){
        if(n%i==0) count++;
        if(count>3) flag = 0;
    }

    if(count==3) return true;
    return false;

}
