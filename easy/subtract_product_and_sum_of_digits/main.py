from functools import reduce

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product, sum = 1, 0
        while n:
            digit = n % 10
            n //= 10
            product *= digit
            sum += digit
        return product - sum