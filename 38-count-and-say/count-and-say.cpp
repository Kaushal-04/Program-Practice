class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";

        string ans = countAndSay(n - 1);
        string temp = "";
        int count = 1;

        for (int i = 1; i < ans.length(); i++) {
            if (ans[i] == ans[i - 1]) {
                count++;
            } else {
                temp += to_string(count) + ans[i - 1];
                count = 1;
            }
        }

        temp += to_string(count) + ans.back();

        return temp;
    }
};