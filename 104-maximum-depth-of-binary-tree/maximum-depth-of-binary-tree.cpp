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
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int count = 1;
        while(!q.empty()){
            vector<TreeNode*> temp;
            while(!q.empty()){
                temp.push_back(q.front());
                q.pop();
            }
            for(auto i=0; i<temp.size(); i++){
                if(temp[i] -> left != NULL){
                    q.push(temp[i]->left);
                }
                if(temp[i] -> right != NULL)
                    q.push(temp[i]->right);
            }
            count++;
        }
        return count-1;
    }
};