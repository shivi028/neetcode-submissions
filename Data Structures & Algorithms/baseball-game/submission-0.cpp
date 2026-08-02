class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>result;
        for(int i=0; i<operations.size(); i++){
            if(operations[i] == "+"){
                if(result.size() >= 2){
                    // Use the last two elements of 'result', not 'i'
                    result.push_back(result[result.size()-1] + result[result.size()-2]);
                }
            }
            else if(operations[i] == "D"){
                if(result.size() >= 1){
                    result.push_back(result.back()*2);
                }
            }
            else if(operations[i] == "C"){
                if(result.size() >= 1){
                    result.pop_back();
                }
            }
            else{
                result.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for(int i=0; i<result.size(); i++){
            sum += result[i];
        }
        return sum;
    }
};