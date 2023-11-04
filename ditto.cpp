#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        set<int> st[25000];
        int n,j;cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            for(int y=0;y<x;y++){
                int a;cin>>a;
                st[i].insert(a);
            }
        }
        for(int i=0;i<n;i++){
            for(auto &value: st[i])
               cout<<value<<" ";
            cout<<"\n";
        }
        /*int k=INT_MAX;
        for(int i=0;i<n;i++){
            auto it=st[i].begin()++;it++;
            if((*it)<k){
                k=(*it);
                j=i;
            }
        }

        cout<<j;
        for(int i=0;i<n;i++){
            if(i==j) continue;
            auto it=st[i].begin()++;it++;
            sum+=(*it);
            st[j].insert((*--it));
        }
        auto itr=st[j].begin()++;
        sum+=(*itr);
        cout<<sum<<"\n";*/
    }
}