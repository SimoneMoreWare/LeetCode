/*
  formula delle combinazioni con ripetizioni, con le semplificazioni.
  l'ordine conta in realtà ma in questo caso gli elementi ordinati posso prenderli una volta sola 
  
  In particolare, dobbiamo scegliere n cifre dal pool di 5 cifre con ripetizioni.
  Perché combinazioni, ma non permutazioni? Poiché il numero deve essere ordinato (le cifre non devono essere decrescenti), quindi dobbiamo contare solo "112", ma non "121", "211".
  
  https://leetcode.com/problems/count-sorted-vowel-strings/description/
*/
int countVowelStrings(int n){
    return (n+1)*(n+2)*(n+3)*(n+4)/24;
}
