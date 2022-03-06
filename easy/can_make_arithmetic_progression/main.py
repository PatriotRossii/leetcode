class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr = sorted(arr)
        length = len(arr)

        difference = arr[1] - arr[0]
        for i in range(1, length):
            if abs(arr[i - 1] - arr[i]) != difference:
                return False
        return True