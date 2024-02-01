class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        a=""
        for i in s:
            if i in "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM0123456789":
                a=a+i
        a=a.lower()
        if (a==a[::-1]): return True
        else: return False