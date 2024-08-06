class Solution(object):
    def minimumPushes(self, s):
        """
        :type word: str
        :rtype: int
        """
        a = [0] * 26
        for i in s :
            x = ord(i)
            a[x-97] +=1
        a.sort()
        a = a[::-1]
        y = 0
        for i in range (0 , 26):
            if (i<8):
                y = y + a[i]
            if (8<=i and i<16):
                y = y + 2*(a[i])
            if (16<=i and i<24):
                y = y + 3*(a[i])
            if (i==24 or i==25):
                y = y + 4*(a[i])
        print (y)
        return y