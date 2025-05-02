class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int i = 0;
        while(i < chars.size()){
            char temp = chars[i];
            long long count = 0;
            while(chars[i] == temp){
                count++;
                i++;
                if(i > chars.size()-1)
                    break;
            }
            s += temp;
            if(count > 1){
                if(count < 10){
                    s += count + '0';
                    continue;
                }
                string dig = "";
                while(count){
                    dig += (count % 10) + '0';
                    count = count / 10;
                }
                reverse(dig.begin(), dig.end());
                s += dig;
            }
        }
        chars.clear();
        for(auto i : s){
            chars.push_back(i);
        }
        return chars.size();
    }
};