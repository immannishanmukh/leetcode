class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n=len(nums)
        ans=[-1]*n
        posind=0
        negind=1
        for i in nums:
            if i > 0:
                ans[posind]=i
                posind+=2
            else:
                ans[negind]=i
                negind+=2
        return ans