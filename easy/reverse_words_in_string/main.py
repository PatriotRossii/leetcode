class Solution:
    def reverseWords(self, s: str) -> str:
        result = []
        length = len(s)
        start_idx = 0

        for i, character in enumerate(s):
            if character == ' ':
                result.append("".join(reversed(s[start_idx:i])))
                start_idx = i + 1
        if start_idx != length - 1:
            result.append("".join(reversed(s[start_idx:])))

        return " ".join(result)