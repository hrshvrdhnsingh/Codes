#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,int> m;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;m.clear();
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int q;cin>>q;
        ll arr[q],c=0;
        for(int i=1;i<=q;i++){
            int a1; ll a2; cin>>a1>>a2;
            ll d = 1ll*a1*a1-4ll*a2; 
            ll x1=(1ll*a1-1ll*sqrt(d))/2;
            ll x2=(1ll*a1+1ll*sqrt(d))/2;
            if(d<0) arr[c++]=0;
            else if(x1+x2!=a1 || x1*x2!=a2) arr[c++]=0;
            else if(x1==x2) arr[c++]=1ll*m[x1]*(m[x1]-1)/2ll;
            else arr[c++]=1ll*m[x1]*m[x2];
        }
        for(int i=0;i<q;i++)
           cout<<arr[i]<<" ";
        cout<<"\n";
    }
}