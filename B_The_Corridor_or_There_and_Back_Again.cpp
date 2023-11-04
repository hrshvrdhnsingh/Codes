#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int mx=INT_MAX,d;
        int n; cin>>n;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            d=a+(b-1)/2;
            mx=min(d,mx);
        }
        cout<<mx<<endl;
    }
}