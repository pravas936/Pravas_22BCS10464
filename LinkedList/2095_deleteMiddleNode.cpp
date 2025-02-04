class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slowp=head;
        ListNode* fastp=head;
        ListNode* prev=NULL;

        if(head==NULL || head->next==NULL) return NULL;

        while(fastp!=NULL && fastp->next!=NULL){
            prev=slowp;
            slowp=slowp->next;
            fastp=fastp->next->next;
        }

        prev->next=slowp->next;
        delete slowp;
        return head;
    }
};