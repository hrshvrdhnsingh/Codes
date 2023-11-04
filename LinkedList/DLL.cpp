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
void insertionHead(int data, Node* &head, Node* tail){
    Node* temp = new Node(data);
    if(head==NULL){
        head=temp; tail=temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head=temp;
}
void print(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertTail(int data, Node* head, Node* tail){
    Node* temp = new Node(data);
    if(head==NULL){
        head=temp; tail=temp;
        return;
    }
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertionHead(12,head,tail);
    insertionHead(8,head,tail);
    insertionHead(4,head,tail);
    print(head);
    insertTail(24,head,tail);
    insertTail(24,head,tail);
    cout<<"..";
    print(head);
}
