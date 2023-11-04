#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k; k--;
        int c=1;
        vector<ll> vn(n);
        vector<ll> vm(m);
        for(int i=0;i<n;i++) cin>>vn[i]; sort(all(vn));
        for(int j=0;j<m;j++) cin>>vm[j]; sort(all(vm));
        if(vn[0]<vm[m-1]) {swap(vn[0],vm[m-1]);sort(all(vn)); sort(all(vm));}
        if(k&1){
            if(vm[0]<vn[n-1]) swap(vm[0],vn[n-1]);
        }
        ll output=0;
        for(int i=0;i<n;i++) output+=vn[i];
        cout<<output<<endl;
    }
}