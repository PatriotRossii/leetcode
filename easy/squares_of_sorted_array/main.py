class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        i, j = 0, len(nums) - 1
        for k in reversed(range(len(nums))):
            a, b = nums[i], nums[j]
            if abs(a) < abs(b):
                result[k] =  b ** 2
                j -= 1
            else:
                result[k] = a ** 2
                i += 1
        return result