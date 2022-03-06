class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        temporary = [0] * (m + n)
        i, j = 0, 0
        k = 0

        while i < m and j < n:
            a, b = nums1[i], nums2[j]
            if a < b:
                temporary[k] = a
                i += 1
                k += 1
            else:
                temporary[k] = b
                j += 1
                k += 1

        if i < m:
            while i < m:
                temporary[k] = nums1[i]
                i += 1
                k += 1
        if j < n:
            while j < n:
                temporary[k] = nums2[j]
                j += 1
                k += 1

        nums1[:] = temporary
