class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string result = "";

        // 0,2,4 even me word1
        // 1,3,5 odd me word2
        int i=0, j=0; 
        while(i < n || j < m){
            if(i < n){
                result.push_back(word1[i++]);
            }
            if(j < m){
                result.push_back(word2[j++]);
            }
        }

        return result;
    }
};