class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=accumulate(nums.begin(),nums.begin()+k,0.0);
        int r=k,l=0;
        double maxsum=sum;
        while(r<nums.size()){
            sum=sum+nums[r++];
            sum=sum-nums[l++];
            maxsum=max(maxsum,sum);
        }
        return maxsum/(double)k;
    }
};