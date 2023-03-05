/*io l ho fatto cosi

un numero n può essere scritto come 
numero = divisore*quoziente + resto

quindi 

n = m*q + r

si deve scorrere l'array word, e ogni volta che scorro su una nuova posizione devo aggiungere la cifra i-esima alla fine del valore che sto costruendo iterazione dopo iterazione. 
Per fare questo basta moltiplicare per 10 il valore attuale e aggiungere il valore i-esimo "alla fine"

quindi

10*val + cifra_attuale

ma val possiamo scriverlo come = m*q + r

quindi 10*(m*q + r) + cifra_attuale

10mq + 10r + cifra_attuale

il primo termine è sempre divisibile per m

quindi consiste nel controllare iterazione dopo iterazione se 

10r + cifra_attuale sia divisibile per m

se è divisibile aggiungo 1 altrimenti 0

https://leetcode.com/problems/find-the-divisibility-array-of-a-string/description/
*/

int* divisibilityArray(char * word, int m, int* returnSize){
    int lenWord = strlen(word);
    int *res = (int *) malloc(lenWord*sizeof(int));
    int i;
    long long int val=0;
    int wordInt;

    for(i=0;i<lenWord;i++){
        wordInt = (int) word[i] - '0';
        val = (10*val + wordInt)%m;
        if(val==0) res[i]=1;
        else res[i]=0;    
    }

    *returnSize = lenWord;
    return res;
}
