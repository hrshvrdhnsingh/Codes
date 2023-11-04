#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        set<int> st[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a;cin>>a;
                st[i].insert(a);
            }
        }
        vector<pair<int,int>> v[n];int a,b;
        for(int i=0;i<n;i++){int sum=0,c=0;
            for(auto &x:st[i]){
                if((sum+x)<=h){
                    sum+=x;c++;
                }
                if(i==0) {a=c;b=sum;}
            }
            v[i].first=c;v[i].second=sum;
        }
        sort(v.begin(),v.end());
        int max=0,min=INT_MAX;
        for(int i=0;i<n;i++){
            for(auto &x: v[i]){
                if(x.first==a && x.second==b) cout<<n-(i)<<endl;
            }
        }  
    }
}