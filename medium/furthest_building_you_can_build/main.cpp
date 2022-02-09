#include <queue>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, std::vector<int>, std::greater<int>> diffs;
        for(int i = 0; i != heights.size() - 1; ++i) {
            int diff = heights[i + 1] - heights[i];
            clog << "Diff: " << diff << '\n';

            if(diff > 0) {
                diffs.push(diff);
                clog << diff << " > 0, pushing into priority queue" << '\n';
            }
            if(diffs.size() > ladders) {
                clog << diffs.size() << " > ladders, get top from priority queue" << '\n';
    
                clog << "Count of bricks before: " << bricks << ", ";
                bricks -= diffs.top();
                clog << "count of bricks after: " << bricks << '\n';

                diffs.pop();
            }
            if(bricks < 0) {
                clog << bricks << " < 0, returning " << i << "\n";
                return i;
            }
            clog << '\n';
        }
        return heights.size() - 1;
    }
};

int main() {
    Solution solution;
    std::vector<int> heights = {1, 5, 1, 2, 3, 4, 10000};
    clog << solution.furthestBuilding(heights, 4, 1);
}