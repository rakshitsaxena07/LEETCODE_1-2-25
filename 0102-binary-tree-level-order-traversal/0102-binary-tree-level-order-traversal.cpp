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
    void level(TreeNode *root,int level1, vector<vector<int>> &res){
        if(!root){
            return;
        }

        if(res.size()<=level1){
            res.push_back({});
        }
        res[level1].push_back(root->val);
        level1++;

        level(root->left,level1,res);
        level(root->right,level1,res);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<vector<int>>res;
        level(root,0,res);

        return res;
    }
};