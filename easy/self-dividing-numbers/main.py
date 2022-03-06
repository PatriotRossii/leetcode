from typing import List

class Solution:
    def digits(self, digit: int) -> List[int]:
        result = []
        while digit:
            result.append(digit % 10)
            digit //= 10
        return result

    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        result = []
        for number in range(left, right + 1):
            flag = True
            for digit in self.digits(number):
                if (digit == 0) or (number % digit != 0):
                    flag = False
                    break
            if flag:
                result.append(number)
        return result