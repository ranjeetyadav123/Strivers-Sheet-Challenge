class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head, *prev=NULL, *nextp;
        while(curr !=NULL)
        {
            nextp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextp;
        }
        head=prev;
        return head;
    }
};