class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> count(n, 0);
        for(auto it : trust){
            count[it[0]-1]--;
            count[it[1]-1]++;
        }
        for(auto it=0; it<count.size(); it++){
            if(count[it] == n-1)
                return it+1;
        }
        return -1;
    }
};