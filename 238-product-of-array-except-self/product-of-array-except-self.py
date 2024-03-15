class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        c,p=0,1
        for i in nums:
            if i !=0:
                p = p * i
            else : c+=1
        for i in range (0,len(nums)):
            if nums[i] == 0:
                if c<=1:
                    nums [i] = p
                else :
                    nums [i] = 0
            else :
                if c!=0:
                    nums [i] = 0
                else :
                    nums [i] = int (p/nums[i])
        return nums