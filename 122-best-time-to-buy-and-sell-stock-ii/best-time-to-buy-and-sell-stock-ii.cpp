class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int stock = prices[0];
        for(auto i=1; i<prices.size(); i++){
            if(stock < prices[i])
                profit += prices[i] - stock;
            stock = prices[i];
        }
        return profit;
    }
};