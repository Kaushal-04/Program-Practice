class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(int num : nums){
            pq.push(num);
        }
        if(pq.top() >= k)   return ans;
        while((int)pq.size() >= 2 && pq.top() < k){
            ans++;
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            pq.push(min(x,y)*2+max(x,y));
        }
        return ans;
    }
};