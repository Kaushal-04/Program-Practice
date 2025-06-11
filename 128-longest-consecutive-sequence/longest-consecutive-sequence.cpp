class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for (auto it : nums) {
            st.insert(it);
        }
        int maxi = 0;
        int count = 1; 
        if (st.empty()) 
            return 0;
        vector<int> data(st.begin(), st.end()); 
        for (int i = 0; i < data.size() - 1; i++) {
            if (data[i] + 1 == data[i + 1]) {
                count++;
            } else {
                maxi = max(maxi, count);
                count = 1;
            }
        }
        maxi = max(maxi, count); 
        return maxi;
    }
};
