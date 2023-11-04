#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int value){
        this->data=value;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertHead(int data, Node* &head, Node* &tail){
    Node* temp = new Node(data);
    if(head==NULL){
        head=temp; tail=temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head=temp;
}

void insertTail(int data, Node* &head, Node* &tail){
    Node* temp = new Node(data);
    if(head==NULL){
        head=temp; tail=temp;
        return;
    }
    tail->next=temp;
    temp->prev=tail;
    tail=temp; return;
}
void insertPosition(int data, int position, Node* head, Node* tail){
    if(head==NULL){
        cout<<"Empty"<<endl;
        return;
    }
    Node* prev =head;
    int i=1;
    while(i<position-1){
        prev= prev->next;
        i++;
    }
    Node* curr=prev->next;
    Node* temp = new Node(data);
    prev->next=temp;
    temp->prev=prev;
    temp->next=curr;
    curr->prev=temp;
} 
void Deletion(int position,Node* &head, Node* &tail){
    int i=1;
    Node* temp = head;
    while(i<position-1){
        head=head->next;
        i++;
    }
    Node *curr = head->next->next;
    temp->next=curr;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertHead(12,head,tail);
    insertHead(8,head,tail);
    insertHead(4,head,tail);
    print(head); cout<<endl;
    insertTail(24,head,tail);
    insertTail(48,head,tail);
    print(head); cout<<endl;

    cout<<"At position"<<endl;
    insertPosition(888, 2, head, tail);
    insertPosition(666,4,head,tail);
    print(head); cout<<endl;
    cout<<"After Deletion:";
    Deletion(4,head,tail);
    print(head);
}
