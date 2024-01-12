class Solution(object):
    def maxArea(self, a):
        """
        :type height: List[int]
        :rtype: int
        """
        i=0
        c=0
        j=len(a)-1;
        while (i<=j) :
            x = min(a[i],a[j]);
            y = abs(j-i)
            c=max(c,x*y)
            if (min(a[i],a[j])==a[i]):
                i+=1
            else:
                j-=1
        #print(c)
        return c