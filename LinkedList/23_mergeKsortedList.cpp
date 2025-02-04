#include<queue>

class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

        int k=lists.size();
        if(k==0) return NULL;

        for(int i=0;i<k;i++){
            if(lists[i]!=NULL){
                minHeap.push(lists[i]);
            }
        }

        ListNode *head=NULL;
        ListNode *tail=NULL;    // for answer LL

        while(minHeap.size()>0){
            ListNode *top=minHeap.top();
            minHeap.pop();

            if(head==NULL){                  // if answer LL is empty
                head=tail=top;

                if(tail->next!=NULL){
                    minHeap.push(tail->next);     // add the next element of same LL in heap
                }
            }
            else{
                tail->next=top;              // answer LL has already some elements in it
                tail=top;        

                if(tail->next!=NULL){
                    minHeap.push(tail->next);     // add the next element of same LL in heap
                }            
            }
        }
        return head;
    }
};