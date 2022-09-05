def detectCapitalUse(word):
    if word.islower()==True:
        return True
    elif word.isupper()==True:
        return True
    elif word[0].isupper()==True and word[1:].islower()==True:
        return True
    return False

def main():
    word = "FlaG"
    res=detectCapitalUse(word)
    print(res)
main()
