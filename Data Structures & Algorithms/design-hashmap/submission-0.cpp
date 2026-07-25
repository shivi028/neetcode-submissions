class MyHashMap {
    vector<pair<int, int>>mapData;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto &i : mapData){
            if(i.first == key){
                i.second = value;
                return;
            }
        }
        mapData.push_back({key, value});
        
    }
    
    int get(int key) {
        for(auto& i : mapData){
            if(i.first == key) return i.second;
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto it = mapData.begin(); it != mapData.end(); it++){
            if(it->first == key) {
                mapData.erase(it);
                break;
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