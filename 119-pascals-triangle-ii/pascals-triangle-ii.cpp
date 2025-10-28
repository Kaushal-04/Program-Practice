class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back(1);
        if (rowIndex == 0) return res;

        for (int i = 1; i <= rowIndex; i++) {
            vector<int> temp(i+1, 1);
            for (int j = 1; j < i; j++) {
                temp[j] = res[j-1] + res[j];
            }
            res = temp;
            if(i == rowIndex){
                return res;
            }
        }
        return res;
    }
};