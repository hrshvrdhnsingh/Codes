#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int arr;
        int size;
        int top;
        
    Stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }
    void push(int value){
        if(top==size-1) cout<<"Stack Overflow"<<endl;
        else 
            arr[++top]=value;
    }
    void pop(){
        if(top==-1)
            cout<<"Stack Underflow"<<endl;
        else{
            cout<<"Popped value:"<<arr[top]<<endl;
            top--;
        }
    }
    void peek(){
        cout<<"Top Element is:"<<arr[top]<<endl;
    }
};//main method can't be in class as the program will no longr have an entry point
    int main(){
        Stack s(10);//calling constructor of class Stack
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
