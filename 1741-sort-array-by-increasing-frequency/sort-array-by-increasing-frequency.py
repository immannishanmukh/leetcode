class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        return sorted(nums, key=lambda x:(Counter(nums)[x],-x))