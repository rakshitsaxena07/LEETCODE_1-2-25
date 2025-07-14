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
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode * tmp=head;
        stack<int>st;
        while(tmp!=NULL){
            st.push(tmp->val);
            tmp=tmp->next;
        }
        int sum=0;
        int i=0;
        while(!st.empty()){
                int data=st.top();
                st.pop();
                sum+=(pow(2,i++)*data);
        }
        return sum; 
    }
};