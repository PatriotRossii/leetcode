class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(char x: address) {
            if(x == '.') {
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            } else {
                result.push_back(x);
            }
        }
        return result;
    }
};