class Solution(object):
    def arrayRankTransform(self, a):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        b=list(set(a))
        b.sort()
        c=[]
        d={}
        for i in range (len(b)):
            d[b[i]]=i+1
        for i in a:
            c.append(d[i]);
        return c