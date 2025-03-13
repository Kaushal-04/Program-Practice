class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n == 1)
            return 1;
        vector<int> count(n,1);
        for(auto i=1; i<n; i++){
            if(ratings[i] > ratings[i-1] && count[i] <= count[i-1])
                count[i] = count[i-1]+1;

        }
        for(auto i=n-2; i>=0; i--){
            if(ratings[i] > ratings[i+1] && count[i] <= count[i+1])
                count[i] = count[i+1]+1;

        }
        int sum = 0;
        for(auto i=0; i<n; i++){
            sum += count[i];
        }
        return sum;
    }
};