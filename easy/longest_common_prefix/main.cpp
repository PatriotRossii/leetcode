#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	size_t minLength = 200;
    	for(const string& str: strs) {
    		if(str.size() < minLength) {
    			minLength = str.size();
    		}
    	}

    	string commonPrefix = "";
    	for(auto it = 0; it != minLength; ++it) {
    		bool flag = true;
    		char control_character = strs[0][it];
    		for(const string& str: strs) {
    			flag = flag && (str[it] == control_character);
    		}
    		if(flag) {
    			commonPrefix.push_back(control_character);
    		} else {
    			break;
    		}
    	}

    	return commonPrefix;
    }
};