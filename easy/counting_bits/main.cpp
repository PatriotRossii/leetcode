#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i = 0; i <= n; ++i) {
            bitset<32> bits(i);
            result.push_back(bits.count());
        }
        return result;
    }
};

int main() { }