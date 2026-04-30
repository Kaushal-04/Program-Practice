class Solution {
public:

    void help(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans, int i){
        if(i == nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        help(nums, curr, ans, i+1);
        curr.pop_back();
        help(nums, curr, ans, i+1);
    } 

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        help(nums, curr, res, 0);
        return res;
    }
};