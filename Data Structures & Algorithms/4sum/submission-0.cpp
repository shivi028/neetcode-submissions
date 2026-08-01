class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> result;

        if(n < 4) return result;

        // s1 : sort
        sort(nums.begin(), nums.end());

        // s2 : first fixed pointer
        for(int i=0; i<n-3; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            // second fixed pointer
            for(int j=i+1; j<n-2; j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;

                // s3 : two pointers for the remaining part
                int start = j+1;
                int end = n-1;

                while(start < end){
                    long long sum = (long long)nums[i]+nums[j]+nums[start]+nums[end];
                    if(sum == target){
                        result.push_back({nums[i],nums[j],nums[start],nums[end]});
                        start++;
                        end--;

                         // skip duplicates for start pointer
                    while(start < end && nums[start] == nums[start-1]) start++;
                    while(start < end&& nums[end] == nums[end+1]) end--;
                    }
                    else if(sum < target) start++;
                    else end--;
                   
                }
            }
        }
        return result;
    }
};