/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    vector<int>res;
    void toStore(ListNode *temp){
        while(temp){
            res.push_back(temp->val);
            temp=temp->next;
        }
    }
    TreeNode * toCreate(vector<int>res,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid=left+(right-left)/2;
        TreeNode * root=new TreeNode(res[mid]);

        root->left=toCreate(res,left,mid-1);
        root->right=toCreate(res,mid+1,right);

        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode *temp=head;
        toStore(temp);
        int l=0;
        int r=res.size()-1;
        return toCreate(res,l,r);
    }
};