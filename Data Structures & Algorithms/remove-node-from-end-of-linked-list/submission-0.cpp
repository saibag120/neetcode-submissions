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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int x=0;
        while(curr){
            x++;
            curr=curr->next;
        }
        int a=x-n+1;
        if(a==1) head=head->next;
        else{
            int b=a-1;
            int i=1;
            ListNode* curr1=head;
            while(i<b){
                curr1=curr1->next;
                i++;
            }
            curr1->next=curr1->next->next;
        }
        return head;
    }
};
