class Solution:
    def arraySign(self, nums: List[int]) -> int:
        count_negative = 0
        for number in nums:
            if number < 0:
                count_negative += 1
            elif number == 0:
                return 0

        return 1 if count_negative % 2 == 0 else -1