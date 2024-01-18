class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s=sum(nums)
        c=0
        n=len(nums)
        for i in range(0,n):
            s=s-nums[i]
            
            if (s==c) : return i
            c=c+nums[i]
        return -1
        