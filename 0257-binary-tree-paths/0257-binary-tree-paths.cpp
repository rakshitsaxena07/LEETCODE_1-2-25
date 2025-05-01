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
    void dfs(TreeNode* root, vector<string> &res,string path ){
        if(!root){return;}

        if(!path.empty()){
            path=path + "->";
        }
        path+= to_string(root->val);

        if(!root->left and !root->right){
            res.push_back(path);
        }
        else{
            dfs(root->left,res,path);
            dfs(root->right,res,path);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(!root){
            return res;
        }
        string path;
        dfs(root,res,path);

        return res;
    }
};