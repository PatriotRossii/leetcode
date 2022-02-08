#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
    int sumOfDigits(int n) {
        int sum = 0;
        do {
            sum += n % 10;
            n /= 10;
        } while(n);
        return sum;
    }
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> groups;
        for(int i = 1; i <= n; ++i) {
            //cout << i << ": " << sumOfDigits(i) << endl;
            groups[sumOfDigits(i)] += 1;
        }

        int maxValue = 0;
        for(auto& [key, value]: groups) {
            //cout << key << ": " << value << endl;
            if(value > maxValue) maxValue = value;
        }

        int result = 0;
        for(auto& [key, value]: groups) {
            if(value == maxValue) {
                result += 1;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    solution.countLargestGroup(13);
}