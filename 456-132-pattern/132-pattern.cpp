class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)   
            return false;
        stack<int> st;
        int sec = INT_MIN;
        for(int j=n-1; j>=0; j--){
            if(nums[j] < sec)
                return true;
            while(!st.empty() && nums[j] > st.top()){
                sec = st.top();
                st.pop();
            }
            st.push(nums[j]);
        }
        return false;
    }
};