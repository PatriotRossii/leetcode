class Solution:
    def frequency(self, s1: str):
        result = dict()
        for character in s1:
            result[character] = result.get(character, 0) + 1
        return result

    def checkInclusion(self, s1: str, s2: str) -> bool:
        f_length, s_length = len(s1), len(s2)
        f_frequency = self.frequency(s1)
        
        for i in range(s_length - f_length + 1):
            if self.frequency(s2[i:i+f_length]) == f_frequency:
                return True

        return False