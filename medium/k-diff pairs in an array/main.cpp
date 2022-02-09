#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int counter = 0;
        set<pair<int, int>> occurence;

        for(auto i = nums.begin(), before_end = nums.end() - 1; i != before_end; ++i) {
            for(auto j = i + 1, end = nums.end(); j != end; ++j) {
                int diff = abs(*j - *i);

                int min_element = std::min(*j, *i);
                int max_element = min_element + diff;

                if(diff == k && !occurence.count({min_element, max_element})) {
                    ++counter;
                    occurence.insert({min_element, max_element});
                }
            }
        }
        return counter;
    }
};