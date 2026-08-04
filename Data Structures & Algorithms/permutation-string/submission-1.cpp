class Solution {
public:
    bool match(int a1[], int a2[]){
        for(int i=0; i<26; i++){
            if(a1[i] != a2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        int arr1[26] = {0};
        int arr2[26] = {0};

        for(int i=0; i<s1.size(); i++){
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }
        if(match(arr1, arr2)) return true;

        int windowSize = s1.size();
        for(int i = s1.size(); i<s2.size(); i++){
            // Add the new character entering the window on the right
            arr2[s2[i]-'a']++;
            // remove char from left
            arr2[s2[i-windowSize]-'a']--;

            if(match(arr1, arr2)) return true;
        }
        return false;
    }
};
