class Solution(object):
    def removeElement(self, a, k):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        while k in a:
            a.remove(k)