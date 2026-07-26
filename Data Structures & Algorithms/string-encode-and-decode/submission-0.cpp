class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(string &s : strs){
            int len = s.size();
            result += to_string(len);
            result += '#';
            result += s;

        }
        cout <<"result : " <<result << endl;
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            // find length
            int len = stoi(s.substr(i, j-i));
            // adding string to vector
            result.push_back(s.substr(j+1, len));

            // updating pointer
            i = j+len+1;
        }
        return result;
    }
};
