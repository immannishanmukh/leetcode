class Solution(object):
    def restoreString(self, s, indices):
        """
        :type s: str
        :type indices: List[int]
        :rtype: str
        """
        r=""
        for i in range(len(s)):
            r=r+s[indices.index(i)]
        return r