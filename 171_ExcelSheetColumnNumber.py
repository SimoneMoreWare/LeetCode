# # slz ottimale (inizio)
# def titleToNumber(self, s):
#   res = 0
#    for c in s:
#        res = res*26 + ord(c)-ord('A')+1
#    return res
# slz ottimale (termine)

alfabeto=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
value = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26]
excel = dict(zip(alfabeto,value))

columnTitle = "A"
sum=0
molt=1
for ch in reversed(columnTitle.lower()):
    sum=sum+molt*excel[ch]
    molt=26*molt

print(sum)
