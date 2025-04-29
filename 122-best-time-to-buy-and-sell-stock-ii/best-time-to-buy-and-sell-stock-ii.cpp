class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = -1;
        int n = prices.size();
        
        for(int i = 0; i < n - 1; i++) {
            if(prices[i + 1] > prices[i]) {
                if(buy == -1)
                    buy = prices[i];
            } else {
                if(buy != -1) {
                    profit += prices[i] - buy;
                    buy = -1;
                }
            }
        }
        if(buy != -1) {
            profit += prices[n - 1] - buy;
        }

        return profit;
    }
};
