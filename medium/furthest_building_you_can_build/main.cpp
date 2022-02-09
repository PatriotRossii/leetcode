#include <vector>

using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        size_t resultIdx = 0;
        for(size_t j = 1; j != heights.size(); ++j) {
            if(heights[resultIdx] >= heights[j]) {
                resultIdx = j;
            } else {
                if(bricks >= heights[j] - heights[j - 1]) {
                    bricks -= heights[j] - heights[j - 1];
                    resultIdx = j;
                } else if(ladders > 0) {
                    ladders -= 1, resultIdx += 1;
                } else {
                    break;
                }
            }
        } 
        return resultIdx;
    }
};