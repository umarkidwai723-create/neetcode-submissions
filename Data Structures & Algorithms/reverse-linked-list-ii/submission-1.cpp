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
ListNode* reverse(ListNode* head){
    ListNode*prev=NULL;
    ListNode*curr=head;
    ListNode*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode*dummy=new ListNode(0);
         dummy->next=head;
         ListNode*prev=dummy;
         for(int i = 1; i < left; i++) {
            prev = prev->next;
        }
            ListNode* first = prev->next;
        ListNode* curr = first;
        ListNode* subHead = NULL;
        ListNode* next = NULL;
               for(int i = left; i <= right; i++) {
            next = curr->next;
            curr->next = subHead;
            subHead = curr;
            curr = next;
        }

        first->next = curr;
        prev->next = subHead;

        return dummy->next;
        
    }
};