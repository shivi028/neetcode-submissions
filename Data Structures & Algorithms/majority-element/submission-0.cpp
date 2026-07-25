class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;

        for(int &num : nums){
            mp[num]++;
        }
        
        int maxi = 0;
        int result = 0;
        for(auto &i : mp){
            if(i.second > maxi){
                maxi = i.second;
                result = i.first;
            }
        }
        return result;
    }
};