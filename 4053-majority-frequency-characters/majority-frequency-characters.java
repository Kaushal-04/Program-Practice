class Solution {
    public String majorityFrequencyGroup(String s) {
        HashMap<Character, Integer> mp1 = new HashMap<>();
        for (char ch : s.toCharArray()) {
            if (mp1.containsKey(ch))
                mp1.put(ch, mp1.get(ch) + 1);
            else
                mp1.put(ch, 1);
        }

        HashMap<Integer, Integer> mp2 = new HashMap<>();
        // FIX HERE 👇
        for (int freq : mp1.values()) {
            if (mp2.containsKey(freq))
                mp2.put(freq, mp2.get(freq) + 1);
            else
                mp2.put(freq, 1);
        }

        int majorityFreq = 0;
        int maxGroupSize = 0;
        for (Map.Entry<Integer, Integer> e : mp2.entrySet()) {
            if (e.getValue() > maxGroupSize || (e.getValue() == maxGroupSize && e.getKey() > majorityFreq)) {
                maxGroupSize = e.getValue();
                majorityFreq = e.getKey();
            }
        }

        StringBuilder res = new StringBuilder();
        for (Map.Entry<Character, Integer> e : mp1.entrySet()) {
            if (e.getValue() == majorityFreq) {
                res.append(e.getKey());
            }
        }

        return res.toString();
    }
}
