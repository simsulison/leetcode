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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp1 = l1;
        ListNode *tmp2 = l2;
        vector<int> a;
        vector<int> b;
        vector<int> ans;
        while(1){
            if(tmp1 == NULL) break;
            a.push_back(tmp1->val);
            tmp1 = tmp1->next;
        }     
        while(1){
            if(tmp2 == NULL) break;
            b.push_back(tmp2->val);
            tmp2 = tmp2->next;
        }
        int len = max(a.size(), b.size());  
        if(a.size() < b.size()){
            while(a.size()!=b.size()){
                a.push_back(0);
            }
        }
        else{
            while(a.size()!=b.size()){
                b.push_back(0);
            }
        }
        int up=0;
        for(int i=0; i<len; i++){
            if(a[i] + b[i] + up >= 10){
                ans.push_back(a[i]+b[i] + up -10);
                up=1;
            }
            else{
                ans.push_back(a[i]+b[i]+up);
                up=0;
            }
        }
        if(up == 1){
            ans.push_back(up);
        }
        ListNode * head = new ListNode(ans[0]);
        ListNode * answer = head;
        for(int i=1; i<ans.size(); i++){
            head->next = new ListNode(ans[i]);
            head = head->next;
        }
        return answer;
    }
}

