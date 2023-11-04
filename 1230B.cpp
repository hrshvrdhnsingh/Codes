#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; string s;
    cin>>n>>k>>s;
    if(n==1&&k==1) {cout<<0<<endl;return 0;}
    //if(k>n) {for(int i=0;i<n;i++) cout<<0; cout<<endl; return 0;}
    for(int i=0;i<n && k>0;i++){
        if(i==0){
            if(s[i]!='1') {s[i]='1';k--;}
        }
        else{if(s[i]!='0') {s[i]='0';k--;}}
    }
    cout<<s<<endl;return 0;
}