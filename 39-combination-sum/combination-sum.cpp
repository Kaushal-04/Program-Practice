class Solution {
public:

    void help(vector<int>& candidates, vector<vector<int>>& ans, int target, int ind, vector<int>& curr){
        if(ind >= candidates.size()){
            if(target == 0)
                ans.push_back(curr);
            return;
        }
        if(candidates[ind] <= target){
        curr.push_back(candidates[ind]);
        help(candidates, ans, target-candidates[ind], ind, curr);
        curr.pop_back();
        }
        help(candidates, ans, target, ind+1, curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        help(candidates, ans, target, 0, curr);
        return ans;
    }
};