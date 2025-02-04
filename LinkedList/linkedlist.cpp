#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverseList(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        Node* listNext=temp->next;
        temp->next=prev;
        prev=temp;      
        temp=listNext;
    }
    return prev;
}

Node* insertAtHead(Node* head){
    cout<<"Enter value to insert"<<endl;
    int val;
    cin>>val;
    Node* newNode= new Node(val);
    newNode->next=head;
    head=newNode;
    return head;
}

Node* removeNodeHead(Node* head){
    if(head==NULL) return NULL;
    Node* front=head->next;
    delete head;
    head=front;
    return head;
}

int main() {
    cout<<"Enter size of linked list"<<endl;
    int n;
    cin>>n;

    cout<<"Enter values"<<endl;

    Node* head=NULL;
    Node* tail=NULL;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        Node* newNode = new Node(value);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        } 
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    cout<<"Original List: ";
    printList(head);

    head=reverseList(head);
    cout<<"Reversed List: ";
    printList(head);

    head=insertAtHead(head);
    cout<<"After Insert at Head: ";
    printList(head);

    head=removeNodeHead(head);
    cout<<"After Removing Head: ";
    printList(head);
    
    return 0;
}



