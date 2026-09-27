class Solution {
    public String minWindow(String s, String t) {
        int m = s.length();
        int n = t.length();

        if (m < n) {
            return "";
        }

        int left = 0;
        int right = 0;

        int count = n;
        int minLength = Integer.MAX_VALUE;
        int start = 0;

        HashMap<Character, Integer> mt = new HashMap<>();

        for (int i = 0; i < n; i++) {
            char ch = t.charAt(i);
            mt.put(ch, mt.getOrDefault(ch, 0) + 1);
        }

        while (right < m) {
            char rch = s.charAt(right);

            if (mt.containsKey(rch)) {
                if (mt.get(rch) > 0) {
                    count--;
                }

                mt.put(rch, mt.get(rch) - 1);
            }

            right++;
            while (count == 0) {

                if (right - left < minLength) {
                    minLength = right - left;
                    start = left;
                }

                char lch = s.charAt(left);

                if (mt.containsKey(lch)) {
                    mt.put(lch, mt.get(lch) + 1);

                    if (mt.get(lch) > 0) {
                        count++;
                    }
                }

                left++;
            }
        }

        if (minLength == Integer.MAX_VALUE) {
            return "";
        }

        return s.substring(start, start + minLength);
    }
}