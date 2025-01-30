#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int i = 0;
        bool pos = true;

        // Skip leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Check for sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            pos = (s[i] == '+');
            i++;
        }

        // Process digits
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            // Check for overflow
            if (num > INT_MAX) {
                return pos ? INT_MAX : INT_MIN;
            }
            i++;
        }

        return pos ? num : -num;
    }
};
