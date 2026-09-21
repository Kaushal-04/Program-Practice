class Solution {
    public String removeOccurrences(String s, String part) {
        int m = part.length();

        while (s.contains(part)) {
            int sIdx = s.indexOf(part);
            s = s.substring(0, sIdx) + s.substring(sIdx + m);
        }

        return s;
    }
}
