class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        version1_parts = [int(e) for e in version1.split(".")]
        version2_parts = [int(e) for e in version2.split(".")]

        min_length = min(len(version1_parts), len(version2_parts))

        if version1_parts[:min_length] == version2_parts[:min_length]:
            return 0
        for i in range(min_length):
            a, b = version1_parts[i], version2_parts[i]
            if a < b:
                return -1
        return 1