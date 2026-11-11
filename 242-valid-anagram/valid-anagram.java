class Solution {
    public boolean isAnagram(String s, String t) {
        int n = s.length();
        int m = t.length();
        if(n != m)
            return false;
        HashMap<Character, Integer> mp = new HashMap<>();
        for(int i=0; i<n; i++){
            char stemp = s.charAt(i);
            char ttemp = t.charAt(i);
            mp.put(stemp, mp.getOrDefault(stemp, 0) + 1);
            mp.put(ttemp, mp.getOrDefault(ttemp, 0) - 1);
        }
        for(Map.Entry<Character, Integer> e : mp.entrySet()){
            if(e.getValue() != 0)
                return false;
        }
        return true;
    }
}