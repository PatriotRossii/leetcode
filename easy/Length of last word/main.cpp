class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter{0};
        bool word{false};

        for(auto it = s.rbegin(), end = s.rend(); it != end; ++it) {
            if(*it == ' ') {
                if(word) break;
            } else {
                word = true;
            }
                
            if(word) counter += 1;
        }
        return counter;
    }
};