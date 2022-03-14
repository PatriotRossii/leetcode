class MyHashMap {
    static constexpr int MAX_KEY = 10e6;

    bool lookupTable[MAX_KEY + 1] { false };
    int data[MAX_KEY + 1];
public:
    MyHashMap() { }
    
    void put(int key, int value) {
        data[key] = value;
        lookupTable[key] = true;
    }
    
    int get(int key) {
        if(lookupTable[key]) return data[key];
        return -1;
    }
    
    void remove(int key) {
        lookupTable[key] = false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */