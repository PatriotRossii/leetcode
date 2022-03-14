class MyHashMap {
    using Bucket = list<pair<int, int>>;    
    vector<Bucket> buckets;
    size_t size{1024};
public:
    MyHashMap() {
        buckets.resize(size);
    }
    
    void put(int key, int value) {
        for(auto& pair: buckets[key % size]) {
            if(pair.first == key) {
                pair.second = value; return;
            }
        }
        buckets[key % size].push_back({key, value});
    }
    
    int get(int key) const {
        for(const auto& pair: buckets[key % size]) {
            if(pair.first == key) return pair.second;
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto it = buckets[key % size].begin(), end = buckets[key % size].end(); it != end; ++it) {
            if(it->first == key) {
                buckets[key % size].erase(it); return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */