class Solution(object):
    def twoSum(self, a, t):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        i=0
        j=len(a)-1
        while (i<=j):
            x=a[i]+a[j]
            if x==t:
                #print("+")
                return [i+1,j+1]
            else:
                if (x<t):
                    i+=1
                else:
                    j-=1
