//Approach : Use decreasing stack , if we pop() ten at te same time that new number is next greater for peek() number so store it else store -1

class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int[] res = new int[n];

        HashMap<Integer, Integer> mp = new HashMap<>();
        Stack<Integer> st = new Stack<>();
        for (int i = nums2.length - 1; i >= 0; i--) {
            while (!st.isEmpty() && st.peek() <= nums2[i]) {
                st.pop();
            }
            mp.put(nums2[i], st.isEmpty() ? -1 : st.peek());
            st.push(nums2[i]);
        }
        for (int i = 0; i < n; i++) {
            res[i] = mp.get(nums1[i]);
        }

        return res;
    }
}
