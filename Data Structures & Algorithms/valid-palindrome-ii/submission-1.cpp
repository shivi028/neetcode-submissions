class Solution {
public:
    bool helper(string s, int i, int j){
        while(i < j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.size();
        int i=0, j=n-1;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                // If a mismatch occurs, try deleting either s[i] or s[j]
                return helper(s, i, j-1) || helper(s, i+1, j);
            }
        }
        return true;  //always palindrome without deleting anything
    }
};