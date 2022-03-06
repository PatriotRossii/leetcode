class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if not nums:
            return []

        answer = []
        previousNumber = nums[0]

        a, b = nums[0], nums[0]
        for number in nums[1:]:
            if number - previousNumber > 1:
                if a == b or b < a:
                    answer.append(str(a))
                else:
                    answer.append(f"{a}->{b}")
                a = number
            else:
                b = number
            previousNumber = number

        if a == b or b < a:
            answer.append(str(a))
        else:
            answer.append(f"{a}->{b}")
        return answer