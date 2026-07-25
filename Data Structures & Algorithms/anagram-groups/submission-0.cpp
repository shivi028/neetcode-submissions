class Solution {
public:

    string generate(string &s){
        int arr[26] = {0};

        for(char &ch : s){
            arr[ch-'a']++;
        }

        string temp = "";

        for(int k=0; k<26; k++){
            int freq = arr[k];
            if(freq > 0) temp += string(freq, k+'a');
        } 
        return temp;
    }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>>mp;
        vector<vector<string>> result;

        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            
            string newword = generate(s);

            mp[newword].push_back(s);
            
        }

        for(auto &it : mp){
            result.push_back(it.second);
        }
        return result;
    }


    
};
