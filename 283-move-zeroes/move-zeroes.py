class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        i = 0 
        c=0
        while (i < n ):
            if i<n and nums[i]==0:
                nums.remove(nums[i])
                n-=1
                c+=1
            else:
                i+=1
        for i in range(c):
            nums.append(0)