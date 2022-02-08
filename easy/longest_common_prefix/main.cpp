#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution0 {
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

class Solution1 {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	string answer = "";

    	std::sort(strs.begin(), strs.end());
    	const string& a = strs.front();
    	const string& b = strs.back();

    	size_t minimum_length = std::min(
    		a.size(), b.size()
    	);
    	for(size_t i = 0; i != minimum_length; ++i) {
    		if(a[i] == b[i]) {
    			answer += a[i];
    		} else {
    			break;
    		}
    	}

    	return answer;
    }
};