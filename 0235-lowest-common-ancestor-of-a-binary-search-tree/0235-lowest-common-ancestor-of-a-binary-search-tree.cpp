/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root->val==p->val || root->val==q->val)
        {return root;}

        int current=root->val;
        if(current>p->val && current>q->val){
            //lowestCommonAncestor(root->left,p,q);
            return lowestCommonAncestor(root->left,p,q);;

        }
        if(current<p->val && current<q->val){
            return lowestCommonAncestor(root->right,p,q);

        }
        
   return root; }
};