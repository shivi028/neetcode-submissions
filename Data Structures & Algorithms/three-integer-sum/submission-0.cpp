class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums, int target, int i, int j){
        vector<vector<int>> result;
        while(i < j){
            if(nums[i] + nums[j] > target) j--;
            else if(nums[i] + nums[j] < target) i++;
            else{
                // check for duplicate
                while(i < j && nums[i] == nums[i+1]) i++;

                while(i < j && nums[j] == nums[j-1]) j--;
                result.push_back({-target, nums[i], nums[j]});
                i++;
                j--;
            }
        }
        return result;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>result;
        // s1: sort
        sort(nums.begin(), nums.end());

        for(int i=0; i<n-2; i++){
            // pehele check kr chuke ahi to skip krdo
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int n1 = nums[i];
            int target = -(n1);
            // calling
            vector<vector<int>> sub_res = twoSum(nums, target, i+1, n-1);
            
            result.insert(result.end(), sub_res.begin(), sub_res.end());
        }
        return result;

    }
};
