#include <bits/stdc++.h>
using namespace std;
class Queueue{
    private:
    int *arr;
    int front,rear,size;
    public:
    Queueue(int front, int rear, int size){
        this->front=0;
        this->rear=-1;
        this->size=size;
        arr = new int[size];
    }
    void push(int value){
        if(rear==size-1) cout<<"Queue Overflow"<<endl;
        else arr[++rear]=value;
    }
    void pop(){
        if(front>rear) cout<<"Queue underflow"<<endl;
        else {cout<<"Popped value:"<<arr[front]<<endl;
        arr[front]=-1;//destroying the entity of the element
        front++;}
    }
    void peek(){
        if(front<=rear){
        cout<<"front Value:"<<arr[front]<<endl;
        cout<<"Back Value:"<<arr[rear]<<endl;
        }
    }
};
int main(){
    Queueue s(-1,0,5);//calling constructor of class Stack
        int ch,val;
        do{
            cout<<"1.PUSH 2.POP 3.PEEK 4.EXIT"<<endl;
            cout<<"Enter Choice"<<endl;
            cin>>ch;
            switch(ch){
                case 1:cin>>val;
                       s.push(val);
                       break;
                case 2:s.pop();
                       break;
                case 3:s.peek();
                       break;
                case 4:cout<<"Exiting..."<<endl;
                       break;
                default: cout<<"Invalid Choice"<<endl;
            }
        }while(ch!=4);
        return 0;
}