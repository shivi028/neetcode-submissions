class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;

        int i=0, j=0;
        int result = 0;
        while(j < nums.size()){
            result += nums[j];
            while(result >= target){
                minLen = min(minLen, j-i+1);
                result -= nums[i++];
            }
            j++;
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};