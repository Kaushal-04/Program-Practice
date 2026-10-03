class Solution {
    public static int count = 0;

    public void merge(int[] nums, int l, int mid, int r) {
        int[] merged = new int[r - l + 1];
        int midx = 0;
        int a1 = l, a2 = mid + 1;

        int left = l, right = mid + 1;

        while (left <= mid) {
            while (right <= r &&
                   (long) nums[left] > 2L * nums[right]) {
                right++;
            }

            count += right - (mid + 1);
            left++;
        }

        // Normal merge
        while (a1 <= mid && a2 <= r) {
            if (nums[a1] <= nums[a2])
                merged[midx++] = nums[a1++];
            else
                merged[midx++] = nums[a2++];
        }

        while (a1 <= mid) {
            merged[midx++] = nums[a1++];
        }

        while (a2 <= r) {
            merged[midx++] = nums[a2++];
        }

        for (int i = 0; i < merged.length; i++) {
            nums[l + i] = merged[i];
        }
    }

    public void mergeSort(int[] nums, int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2;

            mergeSort(nums, l, mid);
            mergeSort(nums, mid + 1, r);
            merge(nums, l, mid, r);
        }
    }

    public int reversePairs(int[] nums) {
        count = 0;

        int n = nums.length;
        mergeSort(nums, 0, n - 1);

        return count;
    }
}
