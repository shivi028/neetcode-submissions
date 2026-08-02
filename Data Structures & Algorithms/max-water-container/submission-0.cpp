class Solution {
public:
    int maxArea(vector<int>& heights) {
        // int height = heights[i]; //min
        // int width = height[i] - height[j];   /max
        int start = 0, end = heights.size()-1;
        int result = 0;
        while(start < end){
            int w = end-start;
            int h = min(heights[start], heights[end]);
            int ans = w * h;
            result = max(result, ans);

            if(heights[start] < heights[end]) start++;
            else end--;
        }
        return result;
    }
};
