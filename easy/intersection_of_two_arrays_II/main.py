class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        occurences_1 = {}
        occurences_2 = {}

        for num in nums1:
            occurences_1[num] = occurences_1.get(num, 0) + 1
        for num in nums2:
            occurences_2[num] = occurences_2.get(num, 0) + 1

        result = []
        for key, value in occurences_1.items():
            result.extend([key] * min(value, occurences_2.get(key, 0)))
        return result