class Solution {
    public void nextPermutation(int[] nums) {
        int n = nums.length;
        int point = -1;

        // Find the pivot
        for (int i = n - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                point = i - 1;
                break;
            }
        }
        if (point == -1) {
            Arrays.sort(nums);
            return;
        }
        int j = n - 1;

        while (nums[j] <= nums[point]) {
            j--;
        }

        // Swap
        int temp = nums[point];
        nums[point] = nums[j];
        nums[j] = temp;
        int left = point + 1;
        int right = n - 1;

        while (left < right) {
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        }
    }
}
