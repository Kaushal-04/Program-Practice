//Add characted to result that are matched in all words

class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder("");
        int idx = 0;
        while(idx < strs[0].length()){
            char match = strs[0].charAt(idx);
            for(int i=1; i<strs.length; i++){
                if(idx >= strs[i].length() || strs[i].charAt(idx) != match)
                    return sb.toString();
            }
            sb.append(match);
            idx++;
        }
        return sb.toString();
    }
}
