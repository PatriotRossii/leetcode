class Solution:
    def character_frequency(self, string):
        result = dict()
        for character in string:
            result[character] = result.get(character, 0) + 1
        return result

    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        length = len(s1)
        count_mismatch = 0

        for i in range(length):
            if s1[i] != s2[i]:
                count_mismatch += 1

        return (count_mismatch <= 2) and (self.character_frequency(s1) == self.character_frequency(s2))