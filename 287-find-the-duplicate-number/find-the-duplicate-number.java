class Solution {
    public int findDuplicate(int[] nums) {
        int ind = nums[0];

        while (ind != -1) {
            if (nums[ind] == -1)
                return ind;

            int temp = nums[ind];
            nums[ind] = -1;
            ind = temp;
        }

        return 0;
    }
}
