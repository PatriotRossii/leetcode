#include <string>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        size_t occurences['z' - 'a' + 1] = {0};
        for(char x: sentence) {
            occurences[x - 'a'] += 1;
        }

        for(auto it = 0, end = 'z' - 'a' + 1; it != end; ++it) {
            if(!occurences[it]) return false;
        }

        return true;
    }
};