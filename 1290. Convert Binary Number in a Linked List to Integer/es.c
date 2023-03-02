/*
https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*
L'istruzione res=2*res+tmp->val; è utilizzata per convertire la lista concatenata di bit in formato binario in un valore decimale corrispondente.

In particolare, la variabile res rappresenta il valore decimale parziale che viene calcolato mano a mano che la funzione scorre la lista concatenata di bit. 
Inizialmente res viene inizializzato a zero.

Ad ogni iterazione del ciclo while, la funzione moltiplica il valore corrente di res per due e aggiunge il valore del bit corrente (tmp->val). 
La moltiplicazione per due si ottiene semplicemente shiftando di una posizione a sinistra il valore attuale di res. 
L'aggiunta del bit corrente avviene sommando il valore del bit corrente moltiplicato per 1 (il bit meno significativo), ossia tmp->val.

Pertanto, l'istruzione res=2*res+tmp->val; aggiorna la variabile res per includere il valore del bit corrente nella sua rappresentazione binaria, 
spostando di una posizione a sinistra il valore di res e aggiungendo il valore del bit corrente alla fine della nuova rappresentazione binaria di res.
Alla fine del ciclo, res conterrà il valore decimale corrispondente alla lista concatenata di bit in formato binario.
*/

int getDecimalValue(struct ListNode* head){
    struct ListNode *tmp = head;
    int res=0;
    while(tmp!=NULL){
        res=2*res+tmp->val;
        tmp=tmp->next;
    }
    return res;
}
