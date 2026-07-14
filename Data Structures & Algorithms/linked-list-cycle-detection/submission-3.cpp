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
    bool hasCycle(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        int i=1;
        while(fast && fast->next){
            if(fast==slow && i!=1) return true;
            slow=slow->next;
            fast=fast->next->next;
            i++;
        }
            return false;
    }
};
