#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int c1=0,c2=0,a[n],flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        if(a[i]==a[0]) c++;
        if(n-c==0) cout<<-1;
        else{
        cout<<c<<" "<<n-c<<"\n";
        for(int i=0;i<n;i++){
            if(i<c) cout<<a[i]<<" ";
            else if(i==c) cout<<"\n"<<a[i]<<" ";
            else cout<<a[i]<<" ";
        }}
        cout<<"\n";
    }
}