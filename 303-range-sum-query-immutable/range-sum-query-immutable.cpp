class NumArray {
public:
    vector<int> prefSum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefSum.resize(n, 0);
        int sum = 0;
        for(auto i=0; i<n; i++){
            sum += nums[i] ;
            prefSum[i] = sum; 
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return prefSum[right];
        return prefSum[right] - prefSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */