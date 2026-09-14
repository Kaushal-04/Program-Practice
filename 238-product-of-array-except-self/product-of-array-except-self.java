class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] res = new int[n];
        long prod = 1;
        boolean twoZero = false;
        for(int i=0; i<n; i++){
            if(twoZero == true && nums[i] == 0){
                return res;
            }
            if(nums[i] == 0)
                twoZero = true;
            else
                prod = prod * nums[i];
        }
        if(twoZero == true){
            for(int i=0; i<n; i++){
                if(nums[i] == 0)
                    res[i] = (int)prod;
            }
        }else{
            for(int i=0; i<n; i++){
                res[i] = (int)prod / nums[i];
            }
        }
        return res;
    }
}