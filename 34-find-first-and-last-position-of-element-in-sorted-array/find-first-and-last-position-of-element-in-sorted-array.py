class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        if target in nums:
            return [nums.index(target),(len(nums)-1)-nums[::-1].index(target)]
        else:
            return[-1,-1]