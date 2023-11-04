#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<int> v(2*n+1);
        for(int i=1;i<=2*n;i++) cin>>v[i];
        vector<pair<int,int> > vp;
        sort(v.begin(),v.end());
        ll sum=0;
        for(int i=n;i>0;i--){
            vp.push_back(make_pair(v[i],v[2*n+1-i]));
        }
        for(int i=1;i<n;i++){
            sum+= abs(vp[i].first-vp[i-1].first)+abs(vp[i].second-vp[i-1].second);
        }
        cout<<sum<<endl;
        for(int i=0;i<n;i++){
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
    }
}