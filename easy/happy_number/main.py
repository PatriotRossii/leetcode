class Solution:
    def isHappy(self, n: int) -> bool:
        counter = 0
        while n != 1 and counter != 6:
            new_number = 0
            while n:
                new_number += (n % 10) ** 2
                n //= 10
            n = new_number
            counter += 1
        return n == 1