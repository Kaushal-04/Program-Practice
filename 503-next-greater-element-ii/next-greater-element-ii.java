class Solution {
    public int[] nextGreaterElements(int[] nums) {
        Stack<Integer> st = new Stack<>();
        int n = nums.length;
        int[] res = new int[n];

        for (int i = 2 * n - 1; i >= 0; i--) {
            int curr = nums[i % n];
            while (!st.isEmpty() && st.peek() <= curr) {
                st.pop();
            }
            if (i < n) 
                res[i] = st.isEmpty() ? -1 : st.peek();
            st.push(curr);
        }
        return res;
    }
}