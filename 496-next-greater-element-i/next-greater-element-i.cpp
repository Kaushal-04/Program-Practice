class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums2[i]] = i;
        }

        vector<int> nextG(n);
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums2[i] > st.top())   st.pop();
            if(st.empty())
                nextG[i] = -1;
            else nextG[i] = st.top();
            st.push(nums2[i]);
        }

        for(int i=0; i<m; i++){
            int ind = mp[nums1[i]];
            if(ind == n-1)
                ans.push_back(-1);
            else ans.push_back(nextG[ind]);
        }
        return ans;
    }
};