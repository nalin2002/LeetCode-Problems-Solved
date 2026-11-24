class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        final_word=""
        n= len(word1)
        m= len(word2)
        i,j=0,0
        while i<n and j<m :
            final_word+= word1[i]
            final_word+= word2[j]
            i= i+1
            j= j+1
        
        while i<n:
            final_word+= word1[i]
            i= i+1
        while j<m:
            final_word+= word2[j]
            j= j+1

        return final_word


        