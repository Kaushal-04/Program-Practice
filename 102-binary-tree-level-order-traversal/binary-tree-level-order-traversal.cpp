/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if(root == nullptr)
            return vec;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        while(!q.empty()){
            vector<TreeNode*> level;
            while(!q.empty()){
                level.push_back(q.front());
                q.pop();
            }
            vector<int> val;
            for(auto it : level){
                if(it -> left != nullptr)
                    q.push(it -> left);
                if(it -> right != nullptr)
                    q.push(it -> right);
                val.push_back(it -> val);
            }
            vec.push_back(val);           
        }
        return vec;
    }
};