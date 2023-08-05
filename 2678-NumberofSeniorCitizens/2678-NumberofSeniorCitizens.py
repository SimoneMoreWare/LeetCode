class Solution:
    def countSeniors(self, details: List[str]) -> int:
        res = 0
        for detail in details:
            if( (detail[11]+detail[12]) > "60" ):
                    res = res + 1

        return res

/*
2678-NumberofSeniorCitizens

*/
