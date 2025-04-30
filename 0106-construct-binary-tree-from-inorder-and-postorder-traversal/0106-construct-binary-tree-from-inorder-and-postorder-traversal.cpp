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
    TreeNode *creation( unordered_map<int,int>ump,vector<int>& postorder,int & postIndex,int left,int right){
        if(left>right){
            return NULL;
        }
        int root=postorder[postIndex];
        TreeNode * treeRoot=new TreeNode (root);
        postIndex--;

        if(left==right){
            return treeRoot;
        }

        int index=ump[root];

         treeRoot->right=creation(ump,postorder,postIndex,index+1,right);
        treeRoot->left=creation(ump,postorder,postIndex,left,index-1);
       

        return treeRoot;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>ump;
        int j=0,n=postorder.size();
        for(auto it:inorder){
            ump[it]=j++;
        }
        int postIndex=n-1,left=0,right=n-1;

        TreeNode*root=creation(ump,postorder,postIndex,left,right);

        return root;

    }
};