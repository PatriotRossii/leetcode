class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        totalSum = 0
        for number in arr:
            totalSum += number

        if totalSum % 3 != 0:
            return False

        one_part = totalSum / 3
        local_sum = 0
        count = 0

        for number in arr:
            local_sum += number
            if local_sum == one_part:
                local_sum = 0
                count += 1

        if count >= 3:
            return True
        return False
