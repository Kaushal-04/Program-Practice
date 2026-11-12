class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, ArrayList<String>> mp = new HashMap<>();
        for(String s : strs){
            char[] arr = s.toCharArray();
            Arrays.sort(arr);
            String temp = new String(arr);
            mp.putIfAbsent(temp, new ArrayList<>());
            mp.get(temp).add(s);
        }
        return new ArrayList<>(mp.values());
    }
}