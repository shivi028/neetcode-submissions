class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for(char &ch : s){
            arr[ch-'a']++;
        }

        for(int i=0; i<t.size(); i++){
            arr[t[i]-'a']--;
        }

        for(int i=0; i<26; i++){
            if(arr[i] > 0 || arr[i] < 0) return false;
        }

        return true;
    }
};
