#include <bits/stdc++.h>
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top1,top2;
    Stack(int Size){
        size = Size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    void push1(int value){
        if(top2-top1>1) arr[++top1]=value;
        else cout<<"Stack Overflow"<<endl;
    }
    void push2(int value){
        if(top2-top1>1) arr[--top2]=value;
        else cout<<"Stack Overflow"<<endl;
    }
    void pop1(){
        if(top1==-1)
            cout<<"Stack Underflow"<<endl;
        else{
            cout<<"Popped value:"<<arr[top1]<<endl;
            top1--;
        }
    }
    void pop2(){
        if(top2==size)
            cout<<"Stack Underflow"<<endl;
        else{
            cout<<"Popped value:"<<arr[top2]<<endl;
            top2++;
        }
    }
    void peek1(){
        cout<<"Top Element is:"<<arr[top1]<<endl;
    }
    void peek2(){
        cout<<"Top Element is:"<<arr[top2]<<endl;
    }
};
int main()
{
    Stack st(10);
    int ch,val;
    do{
        int c;
        cout<<"Enter 1 for stack1 & 2 for stack2"<<endl;
        cin>>c;
        cout<<"1.PUSH 2.POP 3.PEEK 4.EXIT"<<endl;
        cout<<"Enter Choice"<<endl;
        cin>>ch;
        if(c==1){
            switch(ch){
                case 1:cin>>val;
                       st.push1(val);
                       break;
                case 2:st.pop1();
                       break;
                case 3:st.peek1();
                       break;
                case 4:cout<<"Exiting..."<<endl;
                       break;
                default: cout<<"Invalid Choice"<<endl;
            }
        }
        else if(c==2){
            switch(ch){
                case 1:cin>>val;
                       st.push2(val);
                       break;
                case 2:st.pop2();
                       break;
                case 3:st.peek2();
                       break;
                case 4:cout<<"Exiting..."<<endl;
                       break;
                default: cout<<"Invalid Choice"<<endl;
            }
        }
    }while(ch!=4);
    return 0;
}