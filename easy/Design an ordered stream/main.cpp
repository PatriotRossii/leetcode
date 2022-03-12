#include <bits/stdc++.h>

using namespace std;

class OrderedStream {
    map<int, typename vector<string>::iterator> lookupTable;
    vector<string> values;

    int lastInserted{0};
    int currentPosition{0};
public:
    OrderedStream(int n) {
        values.reserve(n)
    }
    
    vector<string> insert(int idKey, string value) {
        values.push_front(value);
        lookupTable.insert({idKey, values.begin()});
        lastInserted = idKey;

        vector<string> result;
        for(auto it = lookupTable.find(idKey), end = lookupTable.end(); it != end; ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */