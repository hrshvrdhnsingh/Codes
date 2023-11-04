#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.empty()) st.push(s[i]);
        else if(s[i]==')' && st.top()=='(') st.pop();
        else st.push(s[i]);
    }
    if(st.empty()) return 1;
    return 0; 
}
void print(string s)
{
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') cout<<s[i]<<')';
        else cout<<'('<<s[i];
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(check(s)) cout<<"NO"<<endl;
        else {cout<<"YES"<<endl; print(s);}
    }
}