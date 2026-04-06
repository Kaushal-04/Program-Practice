class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n < 1)
            return n;
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        int ans = 1;
        int count = 1;
        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int i = 1;
                while(st.find(it + i) != st.end()){
                    i++;
                    count++;
                }
                ans = max(ans, count);
                count = 1;
            }
        }
        return ans;
    }
};