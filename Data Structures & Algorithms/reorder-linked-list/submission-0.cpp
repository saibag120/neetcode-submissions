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
    void reorderList(ListNode* head) {
        ListNode* curr=head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secondhalf=slow->next;
        slow->next=nullptr;
        ListNode* prev=secondhalf;
        while(prev){
            prev=prev->next;
        }
        ListNode* curr1=secondhalf;
        while(curr1){
            ListNode* temp=curr1->next;
            curr1->next=prev;
            prev=curr1;
            curr1=temp;  
        }
        while(head && prev){
            ListNode* temp1=head->next;
            ListNode* temp2=prev->next;
            head->next=prev;
            prev->next=temp1;
            head=temp1;
            prev=temp2;
        }

    }
};
