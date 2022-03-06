class Solution:
    def countOdds(self, low: int, high: int) -> int:
        between = high - low
        low_check = low % 2 == 0
        high_check = high % 2 == 0

        if low_check and high_check:
            return between // 2
        return between // 2 + 1