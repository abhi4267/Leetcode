#include <unordered_map>

class MyHashMap {
private:
    std::unordered_map<int, int> data;

public:
    void put(int key, int value) {
        data[key] = value;
    }

    int get(int key) {
        if (data.find(key) != data.end()) {
            return data[key];
        } else {
            return -1;
        }
    }

    void remove(int key) {
        data.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */