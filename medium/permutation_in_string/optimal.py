class Solution:
    def idx(self, character):
        return ord(character) - 97

    def frequency(self, s1: str):
        result = [0] * 26
        for character in s1:
            numeric_code = ord(character) - 97
            result[numeric_code] = result[numeric_code] + 1
        for i in range(26):
            if result[i] == 0:
                result[i] = None
        return result

    def checkInclusion(self, s1: str, s2: str) -> bool:
        counter, window_size = self.frequency(s1), len(s1)
        string_length = len(s2)

        for i in range(string_length):
            idx = self.idx(s2[i])
            if counter[idx] != None:
                counter[idx] -= 1

            
            if i >= window_size:
                s_idx = self.idx(s2[i - window_size])
                if counter[s_idx] != None:
                    counter[s_idx] += 1

            if all([counter[i] == 0 or counter[i] == None for i in range(26)]):
                return True

        return False