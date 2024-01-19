class Solution(object):
    def strStr(self, a,b):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
    #     """
        for i in range (len(a)-len(b)+1):
            if(a[i:i+len(b)]==b):
                return i
        return -1