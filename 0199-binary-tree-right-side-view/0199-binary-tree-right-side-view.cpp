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
        if(!root){
            return {};
        }
        queue<TreeNode *>qu;
        qu.push(root);
        vector<int>res;
        while(!qu.empty()){
            int n=qu.size();
        
            for(int i=0;i<n;i++){
                TreeNode * curr=qu.front();
                qu.pop();
                if(i==n-1){
                    res.push_back(curr->val);
                }
                if(curr->left){
                    qu.push(curr->left);
                }
                if(curr->right){
                    qu.push(curr->right);
                }

            }
        }
        return res;
    }
};