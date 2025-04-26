class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxi = *max_element(candies.begin(), candies.end());
        vector<bool> res(n);
        for(auto i=0; i<n; i++){
            if(candies[i] + extraCandies >= maxi)
                res[i] = true;
            else
                res[i] = false;
        }
        return res;
    }
};