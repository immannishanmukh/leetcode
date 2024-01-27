# class Solution:
#     def maximumStrongPairXor(self, nums: List[int]) -> int:
#         return max(x ^ y for x in nums for y in nums if abs(x - y) <= min(x, y))

class Solution:
    def maximumStrongPairXor(self, nums: List[int]) -> int:
        nums.sort()
        start = end = mx = 0
        while end < len(nums):
            if abs(nums[end] - nums[start]) > min(nums[end], nums[start]):
                start += 1
                continue
            for i in range(start, end):
                mx = max(mx, nums[i] ^ nums[end])

            end += 1
        return mx



        