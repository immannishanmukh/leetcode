class Solution(object):
    def maximumOddBinaryNumber(self, s):
        """
        :type s: str
        :rtype: str
        """
        c = 0 
        ss = ""
        for i in s :
            if i == '1' :
                c+=1
        if c == 1 :
            ss = '0'*(len(s)-1)
            ss =  ss + '1'
        else :
            ss =  '1'* (c-1)
            sss = '0'* (len(s)-c)
            ss  = ss + (sss+'1')
        return ss
            
