class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int small = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            small = min(small, prices[i]);

            int pp = prices[i] - small;
            maxProfit = max(maxProfit, pp);
           
        }
        return maxProfit;
    }
};
