class Solution {
public:
    void help(int curr, vector<vector<int>>& graph, vector<vector<int>>& res, vector<bool>& visited, int n, vector<int>& temp){
        temp.push_back(curr);
        if(curr == n-1){
            res.push_back(temp);
        }
        else{
            visited[curr] = true;
            for(int neigh : graph[curr]){
                if(!visited[neigh])
                    help(neigh, graph, res, visited, n, temp);
            }
            visited[curr] = false;
        }
        temp.pop_back();

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> res;
        vector<bool> visited(n, false);
        vector<int> temp;
        help(0, graph, res, visited, n, temp);
        return res;
    }
};