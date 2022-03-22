#include <algorithm>
#include <iterator>

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result{nums.begin(), nums.end()};
        std::copy(nums.begin(), nums.end(), std::back_inserter(result));
        return result;
    }
};