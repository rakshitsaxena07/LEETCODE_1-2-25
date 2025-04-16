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
bool findPath(TreeNode* root, vector<TreeNode*>& path, int k) {
    if (root == nullptr)
        return false;

    path.push_back(root);

    if (root->val == k || 
        findPath(root->left, path, k) || 
        findPath(root->right, path, k))
        return true;

    path.pop_back();
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
     vector<TreeNode*> path1, path2;

    if (!findPath(root, path1, n1->val) || 
        !findPath(root, path2, n2->val))
        return nullptr;

    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++) {
        if (path1[i] != path2[i])
            return path1[i - 1];
    }

    return path1[i - 1];
}
};