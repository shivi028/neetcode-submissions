class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // BRUTE FORCE
        // vector<int>result;
        // int n = nums.size();
        // unordered_map<int, int>mp;
        // for(int &i : nums){
        //     mp[i]++;
        // }
        // n = n/3;
        // for(auto &i : mp){
        //     if(i.second > n) result.push_back(i.first);
        // }

        // return result;
        
        // FIND CANDIDATES  (maintain 2 variable and 2 pointers)
        int num1 = -1, num2 = -1, c1 = 0, c2 = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] == num1){
                c1++;
            }
            else if(nums[i] == num2){
                c2++;
            }
            else if(c1 == 0){
                num1 = nums[i];
                c1 = 1;
            }
            else if(c2 == 0){
                num2 = nums[i];
                c2 = 1;
            }
            else{
                c1--;
                c2--;
            }
        }

        // verify
        vector<int>result;
        int freq1 = 0;
        int freq2 = 0;
        for(int &num : nums){
            if(num == num1) freq1++;
            else if(num == num2) freq2++;
        }

        if(freq1 > n/3){
            result.push_back(num1);
        }
        if(freq2 > n/3 && num1 != num2){
            result.push_back(num2);
        }

        return result;

    }
};