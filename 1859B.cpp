#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        vector<int> st[25000];
        int n;cin>>n;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            for(int j=0;j<x;j++) {
                int a;cin>>a;
                st[i].push_back(a);
            }
        }
        int sum=0,k=INT_MAX,j;
        for(int i=0;i<n;i++){
            sort(st[i].begin(),st[i].end());
            if(st[i][1]<k) {j=i;k=st[i][1];
        }
        for(int i=0;i<n;i++){
            if(i==j) continue;
            sum+=st[i][1];
            st[j].push_back(st[i][0]);
        }
        sort(st[j].begin(),st[j].end());
        sum+=st[j][0];
        cout<<sum<<"\n";
    }
}