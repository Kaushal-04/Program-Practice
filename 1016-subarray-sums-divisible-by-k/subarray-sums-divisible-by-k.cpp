class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(), res = 0;
        unordered_map<int, int> remFreq;
        remFreq[0] = 1;
        int sum = 0, rem = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            int rem = (sum % k + k) % k; // Jaruri hai to handle -ve rem
            if(remFreq.find(rem) != remFreq.end()){
                res += remFreq[rem]; 
            }
            remFreq[rem]++;
            
        }
        return res;
    }
};