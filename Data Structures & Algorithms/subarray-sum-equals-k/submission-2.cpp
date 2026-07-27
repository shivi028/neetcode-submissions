class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i; j<nums.size(); j++){
        //         int sum = 0;
        //         for(int a=i; a<=j; a++){
        //             sum += nums[a];
        //         }
        //         if(sum == k) count++;

        //     }
        // }

        // for(int i=0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum += nums[j];
        //         if(sum == k) count++;
        //     }
            
        // }
        // return count;

        map<int, int>mp;
        mp[0] = 1;
        int preSum = 0, cnt = 0;
        for(int i=0; i<nums.size(); i++){
            preSum += nums[i];
            int remove = preSum - k;
            cnt += mp[remove];
            mp[preSum]++;
        } 
        return cnt;
    }
};