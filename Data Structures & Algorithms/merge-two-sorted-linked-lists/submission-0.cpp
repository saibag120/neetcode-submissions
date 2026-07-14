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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode* head=new ListNode(0);
        head->next=nullptr;
        ListNode* curr=head;
        while(curr1 || curr2){
            if(curr1 && curr2 && curr1->val<=curr2->val){
                ListNode* temp= new ListNode(curr1->val);
                curr->next=temp;
                curr=curr->next;
                curr->next=nullptr;
                curr1=curr1->next;
            }
            else if(curr1 && curr2 && curr1->val>curr2->val){
                ListNode* temp=new ListNode(curr2->val);
                curr->next=temp;
                curr=curr->next;
                curr->next=nullptr;
                curr2=curr2->next;
            }
            if(!curr1 && curr2){
                while(curr2){
                    ListNode* temp=new ListNode(curr2->val);
                    curr->next=temp;
                    curr=curr->next;
                    curr->next=nullptr;
                    curr2=curr2->next;
                }
                break;
            }
            if(!curr2 && curr1){
                while(curr1){
                    ListNode* temp=new ListNode(curr1->val);
                    curr->next=temp;
                    curr=curr->next;
                    curr->next=nullptr;
                    curr1=curr1->next;
                }
            }
        }
        // int count1=0;
        // int count2=0;

        // while(curr1->next){
        //     count1++;
        //     curr1->next;
        // }
        // while(curr2->next){
        //     count2++;
        //     curr2->next;
        // }
        // int a=0;
        // int count3=count1+count2;
        return head->next;
    }
};
