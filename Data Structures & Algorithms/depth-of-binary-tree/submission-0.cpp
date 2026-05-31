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
    int dfs(TreeNode* node){
        if(node==NULL) return 0;

        int ld=dfs(node->left);
        int rd=dfs(node->right);

        return 1+max(ld,rd);
    }
public:
    int maxDepth(TreeNode* root) {
        return dfs(root);
    }
};
