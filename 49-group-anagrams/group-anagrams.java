class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> res = new ArrayList<>();
        HashMap<String, ArrayList<String>> mp = new HashMap<>();
        for(int i=0; i<strs.length; i++){
            int[] temp = new int[26];
            String curr = strs[i];
            for(int j=0; j<curr.length(); j++){
                temp[curr.charAt(j) - 'a']++;
            }
            StringBuilder sb = new StringBuilder("");
            for(int k = 0; k<26; k++){
                int count = temp[k];
                while(count > 0){
                    sb.append('a' + k);
                    count--;
                }
            }

            String key = sb.toString();

            if(!mp.containsKey(key)) {
                mp.put(key, new ArrayList<>());
            }

            mp.get(key).add(strs[i]);
        }
        for(Map.Entry<String, ArrayList<String>> e:mp.entrySet()){
            res.add(e.getValue());
        }
        return res;
    }
}