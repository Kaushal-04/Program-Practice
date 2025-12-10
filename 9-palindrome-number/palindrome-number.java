class Solution {
    public boolean isPalindrome(int x) {

        if(x < 0)
            return false;
        
        int temp = 0;
        int demo = x;
        while(x > 0){
            int last_dig = x % 10;
            temp = (temp * 10) + last_dig;
            x = x/ 10;
        }
        if(temp == demo)
            return true;
        else
            return false;
    }
}