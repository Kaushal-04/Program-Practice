class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)
            return n;
        int el = 0;
        for(int i=0; i<n;){
            int temp = nums[i];
            int count = 0;
            while(nums[i] == temp){
                count++;
                if(count <= 2)
                    nums[el++] = nums[i];
                i++;
                if(i >= n)
                    break;
            }
        }
        return el;
    }
};