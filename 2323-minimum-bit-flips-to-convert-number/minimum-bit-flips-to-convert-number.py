class Solution(object):
    def minBitFlips(self, start, goal):
        """
        :type start: int
        :type goal: int
        :rtype: int
        """
        c=0
        n=start^goal
        while (n!=0) :
            if (n&1==1): c+=1
            n=n>>1
        return c