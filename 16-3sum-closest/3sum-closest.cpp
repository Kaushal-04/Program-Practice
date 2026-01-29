class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = INT_MAX;
        int diff = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(diff > abs(sum - target)){
                        diff = abs(sum - target);
                        res = sum;
                    }
                }
            }
        }
        return res;
    }
};