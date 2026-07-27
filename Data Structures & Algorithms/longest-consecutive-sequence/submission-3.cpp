class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // unique and sorted
        set<int> s(nums.begin(), nums.end());

        // converted back for index-based iterations
        vector<int>v(s.begin(), s.end());

        if(v.size() <= 1) return v.size();

        int maxLen = 1;
        int len = 1;
        for(int i=1; i<v.size(); i++){
            if(v[i] - v[i-1] == 1) {
                len++;
                maxLen = max(maxLen, len);
            }else{
                len = 1;
            }
        }
        return maxLen;
    }
};
