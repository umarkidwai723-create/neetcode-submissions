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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)return {};
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>data;
            while(size>0){
                TreeNode*temp=q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                 if(temp->right!=NULL){
                    q.push(temp->right);
                }
                size--;
            }
            ans.push_back(data);

        }
        vector<int>res;
        for(int i=0;i<ans.size();i++){
            res.push_back(ans[i][ans[i].size()-1]);
        }
        
        return res;
    }
};
