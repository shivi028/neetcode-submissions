class Solution {
public:
    int trap(vector<int>& height) {
       int left = 1; ///second element
       int right = height.size()-2; //last second element

       int lmax = height[left-1];
       int rmax = height[right+1];

       int result = 0;

       while(left <= right){
            if(rmax <= lmax){
                result += max(0, rmax-height[right]);
                rmax = max(rmax, height[right]);
                right--;
            } else{
                result += max(0, lmax-height[left]);
                lmax = max(lmax, height[left]);
                left++;
            }
       } 
       return result;
    }
};
