#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(i!=k && i<=x) v.push_back(i);
        }
        for(int i=0;i<n-v.size();i++){
            if(k!=x) v.push_back(x);
            else v.push_back(x-1);
        }
        cout<<accumulate(v.begin(), v.end(), 0)<<endl;
    }
}