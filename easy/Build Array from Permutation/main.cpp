class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        result.reserve(nums.size());

        for(auto it = nums.begin(), end = nums.end(); it != end; ++it) {
            result.push_back(nums[*it]);
        }

        return result;
    }
};