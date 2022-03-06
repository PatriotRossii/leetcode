class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left, right = 0, len(numbers) - 1
        while left < right:
            a, b = numbers[left], numbers[right]
            total = a + b

            if total == target:
                return [left + 1, right + 1]
            if total < target:
                left += 1
            if total > target:
                right -= 1