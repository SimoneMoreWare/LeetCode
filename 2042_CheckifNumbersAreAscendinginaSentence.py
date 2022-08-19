class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        
        flag=1
        rmb=0
        for word in s.split():
            if word.isdigit():
                if flag==1:
                    rmb=int(word)
                    flag=0
                else:
                    if int(word)>rmb:
                        rmb=int(word)
                    else:
                        return False

        return True
