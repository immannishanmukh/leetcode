class Solution(object):
    def findMatrix(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        a = [[]]
        l=[]
        f=0
        for i in nums:
            f=0
            l=[]
            for j in a:
                if i not in j:
                    j.append(i)
                    f = 1
                    break
            if f==0:
                l.append(i)
                a.append([])
                a[-1]=l[::-1]
        print (a)
        return a
        