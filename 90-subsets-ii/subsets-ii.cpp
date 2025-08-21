class Solution {
public:

    void help(vector<int>& nums, set<vector<int>>& res, int i, vector<int> curr){
        if(i == nums.size()){
            sort(curr.begin(), curr.end());
            res.insert(curr);
            return;
        }
        curr.push_back(nums[i]);
        help(nums, res, i+1, curr);
        curr.pop_back();
        help(nums, res, i+1, curr);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> res;
        vector<int> curr;
        help(nums, res, 0, curr);

        vector<vector<int>> ans(res.begin(), res.end());
        return ans;
    }
};