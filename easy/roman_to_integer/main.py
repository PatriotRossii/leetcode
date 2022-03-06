class Solution:
    def romanToInt(self, s: str) -> int:
        letters = {
            "I": 1, "V": 5, "X": 10, "L": 50,
            "C": 100, "D": 500, "M": 1000
        }

        result = 0
        previous_character = ''
        previous_character_value = 0

        for character in s:
            current_character_value = letters[character]

            if character in ['X', 'V'] and previous_character == 'I':
                result -= previous_character_value
                result += current_character_value - previous_character_value
            elif character in ['L', 'C'] and previous_character == 'X':
                result -= previous_character_value
                result += current_character_value - previous_character_value
            elif character in ['D', 'M'] and previous_character == 'C':
                result -= previous_character_value
                result += current_character_value - previous_character_value
            else:
                result += current_character_value

            previous_character = character
            previous_character_value = letters[previous_character]

        return result