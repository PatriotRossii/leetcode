class Solution {
    int countOfDigits(int num) {
        int result = 0;
        do {
            num /= 10;
            result += 1;
        } while(num)
        return result;
    }
public:
    int addDigits(int num) {
        
    }
};