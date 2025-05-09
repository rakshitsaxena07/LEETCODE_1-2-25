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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)
        return 0;
int sum=0;
        queue<TreeNode *>qu;

        qu.push(root);

        while(!qu.empty()){
            int size=qu.size();
            for(int i=0;i<size;i++){
                TreeNode * node =qu.front();
                qu.pop();

                if(node->val>=low and node->val<=high){
                    sum+=node->val;
                }
                if(node->left!=NULL){
                    qu.push(node->left);
                }
                 if(node->right!=NULL){
                    qu.push(node->right);
                }

            }
        }

        return sum;
    }
};