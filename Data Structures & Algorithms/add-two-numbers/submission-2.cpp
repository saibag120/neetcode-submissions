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
        if(l1 && !l2) return l1;
        if(!l1 && !l2) return nullptr;
        ListNode* head2=new ListNode(0);
        ListNode* curr=head2;
        int n=0;
        int remainder=0;
        while(l1 || l2 || remainder !=0){
            n=0;
            if(l1){
                n+=l1->val;
            }
            if(l2){
                n+=l2->val;
                
            }
            n+=remainder;
            int x=n%10;
            curr->next=new ListNode(x);
            remainder=n/10;
            curr=curr->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        curr->next=NULL;
     return head2->next;   
    }
};
