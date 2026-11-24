class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        result=[]
        max_val= max(candies)
        for i in range(len(candies)):
            if max_val <= candies[i]+ extraCandies:
                result.append(True)
            else:
                result.append(False)
        return result