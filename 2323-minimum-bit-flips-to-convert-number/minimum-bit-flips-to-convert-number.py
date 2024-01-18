class Solution(object):
    def minBitFlips(self, a,b):
        """
        :type start: int
        :type goal: int
        :rtype: int
        """
        c=0
        # n=start^goal
        # while (n!=0) :
        #     if (n&1==1): c+=1
        #     n=n>>1
        # return c
        n=max(a,b);
        while (n!=0):
            if (a&1!=b&1): c+=1
            a=a>>1
            b=b>>1
            n=n>>1
        return c