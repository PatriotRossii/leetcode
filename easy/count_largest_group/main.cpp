#include <unordered_map>
#include <iostream>

using namespace std;

class Solution0 {
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

class Solution1 {
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
        int occurences[38] = {0};
        for(int i = 1; i <= n; ++i) {
            occurences[sumOfDigits(i)] += 1;
        }

        int max_occurences = 0;
        for(int i = 1; i <= 37; ++i) {
            if(occurences[i] > max_occurences) max_occurences = occurences[i];
        }

        int result = 0;
        for(int i = 1; i <= 37; ++i) {
            if(occurences[i] == max_occurences) result += 1;
        }

        return result;
    }
};


int main() {
    Solution0 solution0;
    cout << solution0.countLargestGroup(13) << endl;

    Solution1 solution1;
    cout << solution1.countLargestGroup(13) << endl;
}