class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> mp = new HashMap<>();
        int maxi = 0;
        int l = 0, r = 0;
        while(r < s.length()){
            if(!mp.containsKey(s.charAt(r)) || mp.get(s.charAt(r)) < l){
                maxi = Math.max(maxi, r-l+1);
                mp.put(s.charAt(r), r);
                r++;
            }
            else{
                l = mp.get(s.charAt(r)) + 1;
                mp.put(s.charAt(r), r);
                r++;
            }
        }
        
        return maxi;
    }
}