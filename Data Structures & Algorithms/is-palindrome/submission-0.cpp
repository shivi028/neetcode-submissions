class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0, j=n-1;
        while(i < j){
            // skip non-alphanumeric characters from the left
            while(i < j && !isalnum(s[i])){
                i++;
            }
            // skip non-alphanumeric characters from the right
            while(i < j && !isalnum(s[j])){
                j--;
            } 
            // campare characters case-insensitivitg
            if(tolower(s[i]) != tolower(s[j])) return false;
            
            i++;
            j--;
        }
        return true;
    }
};
