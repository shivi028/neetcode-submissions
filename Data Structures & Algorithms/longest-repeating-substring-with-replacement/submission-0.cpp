class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>ch(26, 0);
        int i=0, j=0;
        int maxCount = 0, maxLen = 0;
        while(j < s.size()){
            ch[s[j]-'A']++;
            maxCount = max(maxCount, ch[s[j]-'A']);

            while(((j-i+1) - maxCount) > k){
                ch[s[i]-'A']--;
                i++;
            }
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        return maxLen;
    }
};
