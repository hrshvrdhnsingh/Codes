#include <bits/stdc++.h>
using namespace std;
class CQueue{
    private:
    int *arr;
    int front,rear,size;
    public:
    CQueue(int size){
        front=0;rear=-1;
        this->size=size;
        arr = new int[size];
    }
    void push(int value){
        if(front==0 && rear!=size-1) arr[++rear]=value;
        else if(front!=0 && rear==size-1){
            rear=-1;
            arr[++rear]=value;
        }
        else if((front==0 && rear==size-1) ||abs(rear-front)==1) cout<<"Queue Overflow"<<endl;
        else arr[++rear]=value;
        if(front==-1) front =rear;
    }
    void pop(){
        if(front==-1) cout<<"Queue Underflow"<<endl;
        else cout<<"Popped Element:"<<arr[front]<<endl;
        if (front == rear)
        {
            front = -1; rear = -1;
        }
        else if (front == size-1)
            front = 0;
        else
            front++;
    }
    void peek(){
        cout<<"Front Value:"<<arr[front]<<endl;
        cout<<"Back Value:"<<arr[rear]<<endl;
    }
};
int main(){
    CQueue q(4);
    int ch,val;
    do{
            cout<<"1.PUSH 2.POP 3.PEEK 4.EXIT"<<endl;
            cout<<"Enter Choice"<<endl;
            cin>>ch;
            switch(ch){
                case 1:cin>>val;
                       q.push(val);
                       break;
                case 2:q.pop();
                       break;
                case 3:q.peek();
                       break;
                case 4:cout<<"Exiting..."<<endl;
                       break;
                default: cout<<"Invalid Choice"<<endl;
            }
    }while(ch!=4);
    return 0;
}