class Solution {
    public int lengthOfLongestSubstring(String s) {
        int start = 0, end = 0;
        HashSet<Character> st = new HashSet<>();
        int res = 0;
        int curr = 0;
        while(end < s.length()){
            if(st.contains(s.charAt(end))){
                curr = end - start;
                res = Math.max(res, curr);
                start++;
                end = start;
                st.clear();
            }
            st.add(s.charAt(end));
            end++;
        }
        curr = end - start;
        res = Math.max(res, curr);
        return res;
    }
}