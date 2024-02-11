class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        c = 0
        while (5<=n): 
            c  =  c + n//5
            n = n // 5
        print(c)
        return c