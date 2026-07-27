class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        int n = nums.size();
        unordered_map<int, int>mp;
        for(int &i : nums){
            mp[i]++;
        }
        n = n/3;
        for(auto &i : mp){
            if(i.second > n) result.push_back(i.first);
        }

        return result;
    }
};