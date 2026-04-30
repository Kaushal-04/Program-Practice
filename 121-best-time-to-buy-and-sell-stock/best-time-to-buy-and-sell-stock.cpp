class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int buy = INT_MAX;
        for(int i=0; i<n; i++){
            if(prices[i] < buy)
                buy = prices[i];
            else{
                profit = max(profit, prices[i] - buy);
            }
        }
        return profit;
    }
};