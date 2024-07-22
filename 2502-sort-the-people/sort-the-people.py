class Solution(object):
    def sortPeople(self, names, heights):
        """
        :type names: List[str]
        :type heights: List[int]
        :rtype: List[str]
        """
        n = len (names)
        for i in range (0,n):
            for j in range (i+1,n):
                if (heights[i] < heights[j]):
                    heights[i] , heights[j] = heights[j] , heights[i]
                    names[i] , names[j] = names[j] , names[i]
        return names