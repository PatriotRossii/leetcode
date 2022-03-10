class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        charIndexMap = dict()
        result, start = 0, 0

        for end in range(n):
            duplicateIndex = charIndexMap.get(s[end], None)
            if duplicateIndex != None:
                result = max(result, end - start)
                start = max(start, duplicateIndex + 1)
            charIndexMap[s[end]] = end

        result = max(result, n - start)
        return result