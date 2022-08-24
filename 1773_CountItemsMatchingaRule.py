class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        indexvalue=0
        res=0
        if ruleKey=="color":
            indexvalue=1
        elif ruleKey=="name":
            indexvalue=2

        for item in items:
            if item[indexvalue]==ruleValue:
                res=res+1

        return (res)     
