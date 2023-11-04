#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data; Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
    cout<<endl;
}
void insertHead(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp; tail = temp;
        return;
    } 
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head=temp; tail = temp;
        cout<<"hey"<<endl;
    }
    else{
        Node* tem = new Node(data);
        tail->next = tem;
        tail=tem;
        cout<<"HEYY"<<endl;
    }
}
void insertPosition(int position, int value, Node* &head, Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(value);
        head = newNode; tail = newNode;
        return;
    }
    Node* newNode = new Node(value);
    Node* temp = head;
    if(position==1){
        newNode->next = head;
        head=newNode;
        return;
    }
    int i=1; 
    while(i<position-1){
        temp= temp->next;
        i++;
    }
    
    Node* curr = temp->next;
    newNode->next=curr;
    temp->next=newNode;
}
void Deletion(int position,Node* &head, Node* &tail){
    Node* temp=head;
    int i=1;
    while(i<position-1){
        temp= temp->next;
        i++;
    }
    if(temp->next->next==NULL){
        tail = temp;
        return;
    }

    Node* curr = temp->next->next;
    temp->next = curr;
}
int main(){
    Node* head= NULL;
    Node* tail=NULL;
    //print(head);
    insertHead(head,tail,10);
    insertHead(head,tail,20);
    insertTail(head,tail,45);
    insertHead(head,tail,70);
    insertHead(head,tail,40);
    insertTail(head,tail,34);
    insertTail(head,tail,67);
    print(head);
    insertPosition(8,437346,head,tail);
    //insertPosition(1,999,head,tail);
    print(head);
    
}