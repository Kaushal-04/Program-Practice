class Solution {
    public int longestPalindrome(String s) {
        HashMap<Character, Integer> hm = new HashMap<>();
        int n = s.length();
        for(char ch : s.toCharArray()){
            hm.put(ch, hm.getOrDefault(ch, 0) + 1);
        }
        int count = 0;
        ArrayList<Integer> arr = new ArrayList<>();
        for(int i : hm.values()){
            arr.add(i);
        }
        Collections.sort(arr);
        
        boolean oddfound = false;
        for(int i=arr.size() - 1; i >= 0; i--){
            if(arr.get(i) % 2 == 0)
                count += arr.get(i);
            else{
                oddfound = true;
                count += arr.get(i) - 1;
            }
        }
        if(oddfound)
            return ++count;
        return count;
    }
}