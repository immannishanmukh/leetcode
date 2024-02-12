class Solution(object):
    def containsNearbyDuplicate(self, a, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        d = {}
        for i in range (len(a)):
            if a[i] not in d:
                d[a[i]] = i
            elif (abs(d[a[i]]-i) <= k):
                return True
            else:
                d[a[i]]=i
        else:
            return False