class Solution(object):
    def timeRequiredToBuy(self, a, k):
        """
        :type tickets: List[int]
        :type k: int
        :rtype: int
        """
        c=0 ;
        i=0
        n = len(a)
        while (a[k]!=0):
            if (a[k]==0):
                return c
            if a[i]!=0:
                c=c+1
                a[i]=a[i]-1
            
            if (i!=n-1):
                i+=1
            else:
                i=0
        return c