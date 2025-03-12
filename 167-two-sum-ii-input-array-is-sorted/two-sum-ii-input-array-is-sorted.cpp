class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int l = 0, r = numbers.size()-1;
        while(l < r){
            if(numbers[l] + numbers[r] > target)
                r--;
            else if(numbers[l] + numbers[r] < target)
                    l++;
                else{
                    ans[0] = l+1;
                    ans[1] = r+1;
                    return ans;
                }
        }
        return ans;
    }
};