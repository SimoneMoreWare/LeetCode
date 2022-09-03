class Solution:
    def strongPasswordCheckerII(self, password: str) -> bool:

        alphabet=['aa', 'bb', 'cc', 'dd', 'ee', 'ff', 'gg', 'hh', 'ii', 'jj', 'kk', 'll', 'mm', 'nn', 'oo', 'pp', 'qq', 'rr', 'ss', 'tt', 'uu', 'vv', 'ww', 'xx', 'yy', 'zz','11','22','33','44','55','66','77','88','99','00','!!','@@','##','$$','%%','^^','&&','**','((','))','--','++']
        specialch="!@#$%^&*()-+"

        flag_lowercase=1
        flag_uppercase=1
        flag_digit=1
        flag_special=1

        if len(password)<8:
            return False

        for ch in password:
            if ch.islower()==True and flag_lowercase==1:
                flag_lowercase=0
            elif ch.isupper()==True and flag_uppercase==1:
                flag_uppercase=0
            elif ch.isdigit()==True and flag_digit==1:
                flag_digit=0
            elif ch in specialch and flag_special==1:
                flag_special=0

        for adj in alphabet:
            if password.find(adj) != -1:
                return False

        if flag_lowercase==1 or flag_uppercase==1 or flag_digit==1 or flag_special==1:
            return False
        else:
            return True
