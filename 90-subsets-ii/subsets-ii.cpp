class Solution {
public:

    void help(vector<int>& nums, vector<vector<int>>& res, int i, vector<int>& curr){
        if(i >= nums.size()){
            res.push_back(curr);
            return ;
        }

        curr.push_back(nums[i]);
        help(nums, res, i+1, curr);
        curr.pop_back();
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        help(nums, res, i+1, curr);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        help(nums, res, 0, curr);
        return res;
    }
};