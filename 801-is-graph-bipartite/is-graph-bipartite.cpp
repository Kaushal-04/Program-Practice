class Solution {
public:
    bool bfs(vector<vector<int>>& graph, int curr, vector<int>& color, int currColor){
        int m = graph[curr].size();
        color[curr] = currColor;
        for(int i=0; i<m; i++){
            if(color[curr] == color[graph[curr][i]])
                return false;
            if(color[graph[curr][i]] == -1){
                int nextColor = 1 - currColor;
                if(! bfs(graph, graph[curr][i], color, nextColor))
                    return false;
                
            }
        }
        return true; 
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for(int i=0; i<n; i++){
            if(color[i] == -1){
                if(! bfs(graph, i, color, 0))
                    return false;
            }
                
        }
        return true;
    }
};