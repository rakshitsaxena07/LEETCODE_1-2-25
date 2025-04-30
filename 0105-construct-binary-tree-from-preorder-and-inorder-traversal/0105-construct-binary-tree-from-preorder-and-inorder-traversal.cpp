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

    int searching(vector<int>inorder,int root,int left,int right){
        for(int i=left;i<=right;i++){
            if(root==inorder[i]){
                return i;
            }
        }
        return -1;
    }
    TreeNode * treeCreation(vector<int>& preorder, vector<int>& inorder,int &preIndex,int left,int right){
        
        
        if(left>right){
            return NULL;
        }

        int root=preorder[preIndex];
        preIndex++;

        TreeNode * treeRoot=new TreeNode (root);

        int inoIndex= searching(inorder,root,left,right);
        treeRoot->left=treeCreation(preorder,inorder,preIndex,left,inoIndex-1);
        treeRoot->right=treeCreation(preorder,inorder,preIndex,inoIndex+1,right);

        return treeRoot;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int left=0,right=inorder.size()-1,preIndex=0;

        TreeNode *root=treeCreation(preorder,inorder,preIndex,left,right);

        return root;

    }
};