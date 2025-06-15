class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for(auto i=1; i<prices.size()-1; i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            else
                profit = max(profit, prices[i] - buy);
        }

        return max(profit, prices[prices.size()-1] - buy);
    }
};