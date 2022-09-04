def firstacase(sentence):
    output=0
    for word in sentence.split():
        if (word.islower()==True or contains_hyphens(word)==True or contains_punctuation(word)==True) and contains_number(word)==False:
            check_trattino=count_trattino(word)
            check_punc=count_punc(word)
            if check_trattino==True and check_punc==True:
                output=output+1
                print(word)
    return output

def contains_number(word):
    return any(word.isdigit() for word in word)

def contains_hyphens(word):
    count=0
    for ch in word:
        if ch=="-":
            count=count+1
    if count==len(word):
        return True
    else:
        return False

def contains_punctuation(word):
    count=0
    punctuation = "!.,"
    for ch in word:
        if ch in punctuation:
            count=count+1
    if count==len(word):
        return True
    else:
        return False

def count_trattino(word):
    counttrattino = word.count("-")
    if counttrattino < 2:
        if counttrattino == 1:
            index_trattino = word.find("-")
            if word.endswith("-")==True or word[0]=="-":
                return False
            if word[index_trattino - 1].isalpha() == True and word[index_trattino + 1].isalpha() == True:
                return True
            else:
                return False
        return True
    else:
        return False

def count_punc(word):
    punctuation = "!.,"
    res=0
    for ch in word:
        if ch in punctuation:
            res=res+1
    if res<2:
        if res==1:
            punc_find_is=""
            for p in punctuation:
                if word.find(p)!=-1:
                    punc_find_is=word[word.find(p)]
            if word.endswith(punc_find_is)==True:
                return True
            else:
                return False
        return True
    else:
        return False
def main():
    sentence = "a-b -ab ab- ab, cd! . a!b c., a-b. afad ba-c a! !"
    res=firstacase(sentence)
    print(res)
main()
