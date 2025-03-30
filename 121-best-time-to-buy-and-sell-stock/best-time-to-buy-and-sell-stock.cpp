class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximumProfit = 0, minStockVal = INT_MAX;
        int i = 0;
        while (i < prices.size()) {
            minStockVal = min(minStockVal, prices[i]);
            if (prices[i] >= minStockVal)
                maximumProfit = max(maximumProfit, prices[i] - minStockVal);
            i++;
        }
        return maximumProfit;
    }
};