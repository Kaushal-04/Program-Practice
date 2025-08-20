class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        for(int num=0; num<(int)pow(2, n); num++){
            vector<int> temp;
            for(int i=0; i<n; i++){
                if(num & (1<<i))
                    temp.push_back(nums[i]);
            }
            res.push_back(temp);
        }
        return res;
    }
};