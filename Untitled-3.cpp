#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        vector<pair<int,int>> v;
        int n;cin>>n;       
        for(int i=0;i<n;i++){
            int a; cin>>a;
            v.push_back({a,i});
        }
        int b[n];int c=n;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            b[v[i].second]=c--;
        }
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}