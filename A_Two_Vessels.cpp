#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int count=0;
        int mx=max(a,b);
        int mn=min(a,b);
        while(mx>mn){
            mx-=c;
            mn+=c;
            count++;
        }
        cout<<count<<endl;
    }
}