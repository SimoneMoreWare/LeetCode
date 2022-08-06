num = 38
check=True

while check:
    x=str(num)
    somma=0

    for i in range(len(x)):
        somma=somma+int(x[i])

    num=somma

    if num<10:
        check=False

print(num)
