def checkRecord(s):
    return s.count('A')<2 and s.find("LLL")==-1

def main():
    s = "PPALLL"
    res=checkRecord(s)
    print(res)
main()
