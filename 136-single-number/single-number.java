class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for (int i=0; i<nums.length; i++) {
            result ^= nums[i]; 
        }
        return result;
    }
}

/*
Working
x ^ 0 = x
x ^ x = 0

4 ^ 0 = 4
4 ^ 1 = 4 ^ 1
(4 ^ 1) ^ 2 = 4 ^ 1 * 2
(4 ^ 1 * 2) ^ 2 = 4 ^ 1 ^ 2 ^ 2 = 4 ^ 1 ^ 0 = 4 ^ 1
*/
