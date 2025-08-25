class Solution {
public:
    int maxi = 0;

    int dfs(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        maxi = max(maxi, left + right); 
        return 1 + max(left, right);     
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxi;
    }
};
