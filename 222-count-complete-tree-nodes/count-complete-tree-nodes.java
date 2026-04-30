/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    public int help(TreeNode root, int count){
        if(root == null)
            return 0;
        return help(root.left, count+1) + help(root.right, count+1) + 1;
    }
    public int countNodes(TreeNode root) {
        return help(root, 0);
    }
}