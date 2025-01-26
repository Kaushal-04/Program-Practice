class Solution {
public:
    int reverse(int x) {
        int num = x;
        x = 0;
        while(num){
            if(x < INT_MIN/10 || x > INT_MAX/10)    return 0;
            x = (x * 10)+(num % 10);
            num /= 10;
        }
        return x;
    }
};