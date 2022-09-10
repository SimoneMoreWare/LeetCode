class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = ['a','A','e','E','i','I','o','O','u','U']
        lunghezza_s=len(s)
        a=s[:int(lunghezza_s/2)]
        b=s[int(lunghezza_s/2):]
        count_vowels_a=0
        count_vowels_b=0
        for i in range(int(lunghezza_s/2)):
            if a[i] in vowels:
                count_vowels_a=count_vowels_a+1
            if b[i] in vowels:
                count_vowels_b=count_vowels_b+1
        return count_vowels_a==count_vowels_b