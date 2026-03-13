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
    int sum = 0;
    void dfs(TreeNode* root){
        if(root == NULL) return;
        if(root->left == 0 && root->right == 0){
            sum += root->val;
        }
        dfs(root->left);
        dfs(root->right);

        
    }
    bool checkTree(TreeNode* root) {
        dfs(root);
        if(root->val == sum){
            return true;
        }else{
            return false;
        }
    }
};