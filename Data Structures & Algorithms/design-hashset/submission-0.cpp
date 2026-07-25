class MyHashSet {
public:
    vector<int>nums;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key)){
            nums.push_back(key);
        }
        
    }
    
    void remove(int key) {
        if(nums.size() > 0){
            for(int i = 0; i<nums.size();i++){
                if(nums[i] == key) nums.erase(nums.begin() + i);
            }
        }
    }
    
    bool contains(int key) {
        int cnt = count(nums.begin(), nums.end(), key);
        if(cnt > 0) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */