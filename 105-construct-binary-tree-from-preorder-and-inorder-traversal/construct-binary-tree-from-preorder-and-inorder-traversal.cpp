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
    TreeNode* help(vector<int>& preorder, vector<int>& inorder, int start, int end, int &ind){
        if(start > end)
            return nullptr;
        int rootVal = preorder[ind];
        int i = 0;
        while(i < inorder.size()){
            if(inorder[i] == rootVal)
                break;
            i++;
        }
        ind ++;
        TreeNode* root = new TreeNode(rootVal);
        root -> left = help(preorder, inorder, start, i-1, ind);
        root -> right = help(preorder, inorder, i+1, end, ind);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int ind = 0;
        return help(preorder, inorder, 0, n-1, ind);
    }
};