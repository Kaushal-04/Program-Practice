class Solution {
public:
    bool backtrack(int n, int index, vector<int>& result, vector<bool>& visited) {
        if (index == result.size()) 
            return true;
        
        if (result[index] > 0) 
            return backtrack(n, index + 1, result, visited);

        for (int num = n; num >= 1; --num) {
            if (visited[num]) 
                continue;

            if (num == 1) { 
                result[index] = num;
                visited[num] = true;
                if (backtrack(n, index + 1, result, visited)) 
                    return true;
                result[index] = 0;
                visited[num] = false;
            } else { 
                int secondPos = index + num;
                if (secondPos >= result.size() || result[secondPos] > 0) 
                    continue;

                result[index] = result[secondPos] = num;
                visited[num] = true;
                
                if (backtrack(n, index + 1, result, visited)) 
                    return true;
                
                result[index] = result[secondPos] = 0;
                visited[num] = false;
            }
        }
        return false;
    }

    vector<int> constructDistancedSequence(int n) {
        vector<int> result(2 * n - 1, 0);
        vector<bool> visited(n + 1, false);
        backtrack(n, 0, result, visited);
        return result;
    }
};