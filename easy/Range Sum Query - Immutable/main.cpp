class NumArray {
    vector<int> partialSum = {0};
public:
    NumArray(vector<int>& nums) {
        partialSum.reserve(nums.size() + 1);
        for(std::size_t i = 0, size = nums.size(); i != size; ++i) {
            partialSum.push_back(partialSum[i] + nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        return partialSum[right + 1] - partialSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */