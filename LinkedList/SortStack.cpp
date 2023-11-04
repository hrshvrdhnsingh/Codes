#include <bits/stdc++.h>
using namespace std;
stack<int> sortStack(stack<int> &st){
    stack<int> temp;
    while(!st.empty()){
        int data = st.top();
        st.pop();
        if(!temp.empty() && temp.top()<data){
            st.push(temp.top()); 
            temp.pop();
        }
        temp.push(data);
    }
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    return temp;
}
int main(){
    stack<int> st;
    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);
    st.push(92);
    st.push(23);
    stack<int> ss = sortStack(st);

    while(!ss.empty()){
        cout<<ss.top()<<"\t";
        ss.pop();
    }
}

