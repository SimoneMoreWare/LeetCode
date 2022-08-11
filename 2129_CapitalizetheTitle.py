class Solution:
    def capitalizeTitle(self, title: str) -> str:
        res=""
        for word in title.split():
            if len(word)<3:
                word=word.lower()
            else:
                word=word.title()
            res=res+" "+word

        return (res.strip())
