class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;

        ListNode* res=new ListNode(-1);
        ListNode* ans=res;

        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val){
                res->next=list1;
                res=res->next;
                list1=list1->next;
            }
            else{
                res->next=list2;
                res=res->next;
                list2=list2->next;
            }
        }

        while(list1){
            res->next=list1;
            res=res->next;
            list1=list1->next;
        }
        while(list2){
            res->next=list2;
            res=res->next;
            list2=list2->next;
        }
        return ans->next;
    }
};