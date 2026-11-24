def is_vowel(c: str)->bool:
    return c.lower() in {'a', 'e', 'i', 'o', 'u'}
    
class Solution:

    def reverseVowels(self, s: str) -> str:
        chars= list(s)
        n= len(s)

        i,j=0,n-1
        while i<j:
            if not is_vowel(chars[i]):
                i=i+1
            elif not is_vowel(chars[j]):
                j=j-1
            else:
                chars[i], chars[j]= chars[j],chars[i]
                i=i+1
                j=j-1
        
        return "".join(chars)


