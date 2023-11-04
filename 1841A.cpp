#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,minn=INT_MAX;cin>>n;
        vector<int> v[n];
        vector<int> vmin;
        for(int i=0;i<n;i++){
            int m;cin>>m;
            for(int j=0;j<m;j++) {
                int a;cin>>a;
                v[i].push_back(a);
            }
            int min=*min_element(v[i].begin(),v[i].end());
            if(min<minn) minn=min;
            v[i].erase(find(v[i].begin(),v[i].end(),min));
            vmin.push_back(*min_element(v[i].begin(),v[i].end()));
        }
        cout<<minn+(ll) accumulate(vmin.begin(),vmin.end(),0ll)-*min_element(vmin.begin(),vmin.end())<<endl;
    }
}