class Solution(object):
    def containsNearbyDuplicate(self, a , k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        if (len(list(set(a)))==len(a)) :
            return False


        i = 0

        f = 0
        j = len(a)-1
        for i in range (0 , len(a)) :
            j = len(a)-1
            while (i!=j) :
                if (a[i] == a[j]) :
                    if (k>= abs(i-j)) :
                        return True
                j-=1
        return False