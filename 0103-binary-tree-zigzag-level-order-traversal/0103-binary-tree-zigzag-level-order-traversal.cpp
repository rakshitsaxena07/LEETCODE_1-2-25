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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root){
            return res;
        }
      
        stack<TreeNode *>currlevel,nextlevel;
        currlevel.push(root);
        bool leftToRight=true;
        while(!currlevel.empty()){
              vector<int>temp;
            int size= currlevel.size();
            while(size--){
                TreeNode *pointer=currlevel.top();
                currlevel.pop();
                temp.push_back(pointer->val);
                if(leftToRight){
                    if(pointer->left)
                    nextlevel.push(pointer->left);
                    if(pointer->right)
                    nextlevel.push(pointer->right);
                }
                else{
                    if(pointer->right)
                    nextlevel.push(pointer->right);
                    if(pointer->left)
                    nextlevel.push(pointer->left);
                }
            }
            leftToRight=!leftToRight;
            swap(currlevel,nextlevel);
            res.push_back(temp);
        }

        return res;

    }
};