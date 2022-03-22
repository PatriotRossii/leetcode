class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result{0};
        for(auto it = nums.begin(), end = nums.end(); it != end; ++it) {
            for(auto sIt = it + 1; sIt != end; ++sIt) {
                if(*it == *sIt) result += 1;
            }
        }
        return result;
    }
};