class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ss;
        int maxi = 0;
        int i=0, j=0;

        while(j < s.size()){
            while(ss.find(s[j]) != ss.end()){
                ss.erase(s[i]);
                i++;
            }
            ss.insert(s[j]);
            maxi = max(maxi, j-i+1);
            j++;
        }
        return maxi;
    }
};
