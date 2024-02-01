class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s=s.lower()
        pattern =r'[^a-z0-9]+'
        a = re.sub(pattern,'',s)
        
        if(a[::-1]==a):
            return True
        else:
            return False
        