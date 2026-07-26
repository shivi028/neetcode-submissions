class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<pair<int, int>>p;
        vector<int>result(k);

        for(int &i : nums){
            mp[i]++;
        }

        for(auto &i : mp){
            p.push_back(i);
        }

        // custom sort logic for descending second value
        sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second > b.second;
        });

        // loop only on k elements
        for(int i=0; i<k; i++){
            result[i] = p[i].first;
        }
        return result;
        
    }
};
