import java.util.*;

class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        ArrayList<Integer>[] adj = new ArrayList[numCourses];
        for (int i = 0; i < numCourses; i++) {
            adj[i] = new ArrayList<>();
        }

        // Build graph
        for (int[] pre : prerequisites) {
            adj[pre[1]].add(pre[0]); 
        }

        boolean[] visited = new boolean[numCourses];
        boolean[] pathVis = new boolean[numCourses];

        for (int i = 0; i < numCourses; i++) {
            if (!visited[i]) {
                if (dfs(i, adj, visited, pathVis)) {
                    return false; // cycle found
                }
            }
        }
        return true;
    }

    private boolean dfs(int node, ArrayList<Integer>[] adj,
                        boolean[] visited, boolean[] pathVis) {
        visited[node] = true;
        pathVis[node] = true;

        for (int next : adj[node]) {
            if (!visited[next]) {
                if (dfs(next, adj, visited, pathVis)) return true;
            } else if (pathVis[next]) {
                return true; // cycle detected
            }
        }
        pathVis[node] = false;
        return false;
    }
}
