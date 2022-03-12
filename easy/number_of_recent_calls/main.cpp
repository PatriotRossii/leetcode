#include <bits/stdc++.h>

using namespace std;

class RecentCounter {
    set<int> requests;
public:
    RecentCounter() { }
    
    int ping(int t) {
        requests.insert(t);
        return std::distance(requests.lower_bound(t - 3000), requests.upper_bound(t));
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */