class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums = sorted(nums)
        for j in range(1, len(nums)):
            if nums[j] == nums[j - 1]:
                return True
        return False