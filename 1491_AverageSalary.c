#include <stdio.h>
double average(int* salary, int salarySize);
int main(){
    int salary[]={4000,3000,1000,2000};
    int salarysize=4;
    double m;
    m=average(salary,salarysize);
    printf("%lf ",m);
    return 0;
}
double average(int* salary, int salarySize){
    int i;
    int massimo=salary[0];
    int minimo=salary[0];
    int somma_tot=0;
    double media;
    for(i=0;i<salarySize;i++){
        if(salary[i]>massimo){
            massimo=salary[i];
        }
        if(salary[i]<minimo){
            minimo=salary[i];
        }
        somma_tot=somma_tot+salary[i];
    }
    media=(double)(somma_tot-massimo-minimo)/(salarySize-2);
    return media;
}
