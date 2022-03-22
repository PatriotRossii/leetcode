#include <algorithm>
#include <vector>
#include <numeric>

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximumWealth{0};
        for(const vector<int>& account: accounts) {
            maximumWealth = std::max(
                maximumWealth,
                std::accumulate(account.begin(), account.end(), 0)
            );
        }
        return maximumWealth;
    }
};