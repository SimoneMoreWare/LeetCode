def is_vowel(character):
    vowels = ['a', 'e', 'i', 'o', 'u']
    return character.lower() in vowels

class Solution:
    def vowelStrings(self, words: List[str], left: int, right: int) -> int:

        res = 0

        for index in range(left,right+1):
            if is_vowel(words[index][0]) and is_vowel(words[index][-1]):
                res = res + 1

        return res

'''
2586-CounttheNumberofVowelStringsinRange
https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/
'''
