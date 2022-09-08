class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
        max_pixel=100
        count_line=1
        value=[]

        for i in range(len(s)):
            if max_pixel-widths[ord(s[i])-ord('a')]>=0:
                max_pixel=max_pixel-widths[ord(s[i])-ord('a')]
            else:
                max_pixel=100-widths[ord(s[i])-ord('a')]
                count_line=count_line+1

        value.append(count_line)
        value.append(100 - max_pixel)
        return value