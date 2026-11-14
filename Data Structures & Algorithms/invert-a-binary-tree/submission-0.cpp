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
void swps(TreeNode* root){
    if(root==NULL)return;
  swap(root->left, root->right);

        swps(root->left);
        swps(root->right);

}
    TreeNode* invertTree(TreeNode* root) {
        swps(root);
        return root;
        
    }
};
