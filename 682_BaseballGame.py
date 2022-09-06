def calPoints(ops):
    res=[]
    for value in ops:
        if value=="+":
            res.append(int(res[-1])+int(res[-2]))
        elif value=="D":
            res.append(2*int(res[-1]))
        elif value=="C":
            del res[-1]
        else:
            res.append(int(value))
    return sum(res)
def main():
    ops = ["1","C"]
    res=calPoints(ops)
    print(res)
main()

# + somma DUE punteggi precedenti
# D doppio punteggio precedente
# C elimina punteggio precedente
