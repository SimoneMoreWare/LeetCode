class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        res=[]

        for email in emails:
            emailsplit=email.split("@")
            localname=emailsplit[0]
            domainname=emailsplit[1]

            localname=localname.replace(".","")
            index_plus=localname.find("+")

            if index_plus!=-1:
                localname=localname[:index_plus]+""

            res.append(localname+"@"+domainname)

        return len((set(res)))