class Solution {
public:
    int count = 0;

    void merge(vector<int>& nums, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;
        vector<int> L(nums.begin() + l, nums.begin() + mid + 1);
        vector<int> R(nums.begin() + mid + 1, nums.begin() + r + 1);
        int j = 0;
        for (int i = 0; i < n1; i++) {
            while (j < n2 && (long long)L[i] > 2LL * R[j]) {
                j++;
            }
            count += j;
        }

        int i = 0; 
        j = 0;
        int k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) nums[k++] = L[i++];
            else nums[k++] = R[j++];
        }
        while (i < n1) nums[k++] = L[i++];
        while (j < n2) nums[k++] = R[j++];
    }

    void mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r) return;
        int mid = l + (r - l) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }

    int reversePairs(vector<int>& nums) {
        count = 0;
        mergeSort(nums, 0, nums.size() - 1);
        return count;
    }
};
