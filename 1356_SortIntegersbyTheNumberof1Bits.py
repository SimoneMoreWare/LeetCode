from operator import itemgetter
 
class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        count_one=[]
        for value in arr:
            count=0
            tmp=bin(value)[2:]
            for char in tmp:
                if(char=='1'):
                    count=count+1
            count_one.append(count)

        coppia = list(zip(arr, count_one)) #zip mi permette di associare il valore della lista 1 al primo indicie con il valore della lista 2 al primo indice e cosi via

        result=sorted(coppia,key=itemgetter(1,0)) #ordino in base al quanti 1 ha l'arr, nel caso di parità ordina in base al valore dell'array

        value_arr,one_arr=zip(*result) #splitto la coppia in valori arr e one arr
        return list(value_arr)
