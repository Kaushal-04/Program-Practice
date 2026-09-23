class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();
        if(n > m)
            return false;
        char[] str1 = s1.toCharArray();
        Arrays.sort(str1);
        String match = new String(str1);
        for(int i=0; i<=m-n; i++){
            String temp = s2.substring(i, i + n);
            char[] sortedString = temp.toCharArray();
            Arrays.sort(sortedString);
            String match2 = new String(sortedString);
            if(match.equals(match2))
                return true;
        }
        return false;
    }   
}