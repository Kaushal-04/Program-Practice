class Solution {
    public boolean isPalindrome(String s) {
        int n = s.length();
        int left = 0, right = n - 1;
        boolean lcorrect = false, rcorrect = false;

        while (left < right) {
            if ((s.charAt(left) >= 'a' && s.charAt(left) <= 'z') ||
                (s.charAt(left) >= 'A' && s.charAt(left) <= 'Z') ||
                (s.charAt(left) >= '0' && s.charAt(left) <= '9')) {
                lcorrect = true;
            } else {
                left++;
                continue;
            }
            if ((s.charAt(right) >= 'a' && s.charAt(right) <= 'z') ||
                (s.charAt(right) >= 'A' && s.charAt(right) <= 'Z') ||
                (s.charAt(right) >= '0' && s.charAt(right) <= '9')) {
                rcorrect = true;
            } else {
                right--;       
                continue;
            }

            if (lcorrect && rcorrect) {
                char l = s.charAt(left);
                char r = s.charAt(right);

                if (Character.toLowerCase(l) != Character.toLowerCase(r)) {
                    return false;
                }

                left++;
                right--;

                lcorrect = false;
                rcorrect = false;
            }
        }

        return true;
    }
}