class Solution {
public:
    string intToRoman(int num) {
        vector<int> val(13);
        vector<string> sym(13);
        val[0]=1000; val[1]=900; val[2]=500; val[3]=400; val[4]=100; val[5]=90; val[6]=50; val[7]=40; val[8]=10; val[9]=9; val[10]=5;  val[11]=4; val[12]=1;
        sym[0]="M"; sym[1]="CM"; sym[2]="D"; sym[3]="CD"; sym[4]="C"; sym[5]="XC"; sym[6]="L"; sym[7]="XL"; sym[8]="X";sym[9]="IX"; sym[10]="V"; sym[11]="IV"; sym[12]="I";
        
        string res = "";
        int i = 0;

        while(num && i < 13){
            if(num < 4){
                res += "I";
                num--;
                continue;
            }
            
            if(num >= val[i]){
                int times = num / val[i];
                while(times){
                    res += sym[i];
                    times--;
                }
                num = num % val[i];
            }
            i++;
        }
        return res;
    }
};