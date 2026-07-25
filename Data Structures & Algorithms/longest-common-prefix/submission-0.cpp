class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort the strs array
        sort(strs.begin(), strs.end());

        // compare first and last
        string first = strs.front();
        string last = strs.back();

        int minLen = min(first.size(), last.size());

        int i = 0;
        while(i < minLen && first[i] == last[i]){
            i++;
        }
        return first.substr(0, i);
    }
};