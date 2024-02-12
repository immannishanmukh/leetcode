class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        x = Counter(nums)
        # print(x)
        for i in x:
            if n//2 < x[i]:
                return i
        
        print(i)

        return 