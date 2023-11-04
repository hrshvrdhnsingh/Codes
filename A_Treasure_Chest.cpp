#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        int c=0;
        if(y<=x){
            cout<<x<<endl;
        }
        else{
            if(y-x<=k) cout<<y<<endl;
            else cout<<2*y-x-k<<endl;
        }
    }
}