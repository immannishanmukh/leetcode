class Solution(object):

    def searchRange(self, a, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        h=[]
        for i in range(0,len(a)):
            if(a[i]==target):
                h.append(i)
                break
        for i in range(len(a)-1,-1,-1):
            if(a[i]==target):
                h.append(i)
                break
        if(len(h)==1):
            h.append(-1)
        elif(len(h)==0):
            h.append(-1)
            h.append(-1)
        return h