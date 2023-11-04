#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n; 
        map<int,int> m;
        for(int i=0;i<n;i++) 
        {int a; cin>>a; m[a]++;}
        int flag=0;
        if(m.size()>=3) cout<<"No"<<endl;
        else if(m.size()==2){
            for(auto value:m){
                if(value.second==n/2) {flag=1; break;}
            }
            if(flag==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
}