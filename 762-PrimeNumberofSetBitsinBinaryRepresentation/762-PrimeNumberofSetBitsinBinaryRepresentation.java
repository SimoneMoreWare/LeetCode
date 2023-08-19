class Solution {
    public int countPrimeSetBits(int L, int R) {
        int cnt = 0;  // Contatore per tenere traccia dei numeri primi trovati
        Set<Integer> listPrimes = new HashSet<>(Arrays.asList(2, 3, 5, 7, 11, 13, 17, 19, 23, 29));
        
        // Genera un array di conteggio dei bit per ogni numero fino a R
        int[] res = countBits(R);
        
        // Itera attraverso l'intervallo [L, R] e controlla se il conteggio dei bit
        // del numero corrente è presente nell'insieme dei numeri primi specificati
        for (int i = L; i <= R; i++) {
            if (listPrimes.contains(res[i])) {
                cnt++;
            }
        }
        return cnt; // Restituisce il numero di numeri primi trovati
    }    
    
    public int[] countBits(int num) {
        if (num == 0)
            return new int[1];
        
        // Crea un array per memorizzare il conteggio dei bit per ogni numero fino a 'num'
        int[] dp = new int[num + 1];
        
        dp[0] = 0; // Zero ha zero bit impostati a 1
        dp[1] = 1; // Uno ha un bit impostato a 1
        
        // Calcola il conteggio dei bit per i numeri da 2 a 'num'
        for (int i = 2; i <= num; i++) {
            dp[i] = dp[i >> 1] + dp[i & 1];
            // dp[i >> 1] calcola il conteggio dei bit dell'intero i diviso per 2
            // dp[i & 1] calcola il conteggio dei bit dell'intero i modulo 2
        }
        return dp; // Restituisce l'array dei conteggi dei bit
    }
}

/*
Certo, ti spiego nel dettaglio cosa fa questa parte di codice:

java
Copy code
for (int i = 2; i <= num; i++) {
    dp[i] = dp[i >> 1] + dp[i & 1];
    // dp[i >> 1] calcola il conteggio dei bit dell'intero i diviso per 2
    // dp[i & 1] calcola il conteggio dei bit dell'intero i modulo 2
}
In questa sezione di codice, il ciclo for viene utilizzato per calcolare il conteggio dei bit impostati a 1 per tutti i numeri nell'intervallo da 2 a num, inclusi. Questo ciclo parte da 2 perché i casi per 0 e 1 sono già inizializzati all'interno dell'array dp.

All'interno del ciclo, viene utilizzata la tecnica di bitwise shifting (spostamento bit) per calcolare il conteggio dei bit. Qui c'è come funziona:

i >> 1 effettua uno spostamento bit verso destra di 1 posizione. Questo è equivalente alla divisione di i per 2. In altre parole, stai ottenendo il numero intero ottenuto da i dividendo per 2 e scartando la parte frazionaria.
i & 1 effettua un'operazione bitwise AND tra i e il numero binario 00000001 (che rappresenta il numero 1). Poiché un numero binario 1 ha solo il bit meno significativo impostato a 1, l'operazione i & 1 restituirà 1 se il bit meno significativo di i è 1 e restituirà 0 se il bit meno significativo di i è 0.
Quindi, dp[i >> 1] calcola il conteggio dei bit per l'intero i diviso per 2, e dp[i & 1] calcola il conteggio dei bit per l'intero i modulo 2.

Sommando questi due valori, si ottiene il conteggio totale dei bit impostati a 1 per l'intero i. Questo valore viene assegnato all'array dp nell'indice corrispondente a i.

L'obiettivo di questa operazione è popolare l'array dp con il conteggio dei bit per ogni numero da 2 a num in base alla sua rappresentazione binaria, utilizzando una tecnica di programmazione dinamica. Alla fine, l'array dp conterrà il numero di bit impostati a 1 per ciascun numero nell'intervallo specificato.

762-PrimeNumberofSetBitsinBinaryRepresentation
