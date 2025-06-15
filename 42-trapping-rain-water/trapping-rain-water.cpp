class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pref(n, 0), post(n, 0);
        for(auto i=0; i<n-1; i++){
            pref[i+1] = max(pref[i], height[i]);
            post[n-i-2] = max(post[n-i-1], height[n-i-1]);
        }
        int store = 0;
        for(auto i=0; i<n; i++){
            int water = min(pref[i], post[i]) - height[i];
            if(water > 0)
                store += water;
        }
        return store;
    }
};