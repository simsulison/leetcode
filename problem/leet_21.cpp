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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *newnode = new ListNode();
        ListNode *cur = newnode;
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                cur->next = new ListNode(l1->val);
                l1 = l1->next;
            }     
            else{
                cur->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1 != NULL) cur->next = l1;
        else cur->next = l2;
        return newnode->next;
    }
};

