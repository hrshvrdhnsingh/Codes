#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        vector<int> arr(n,-1);
        v.push_back(1);
        for(int i=2;i<=n;i++){
            if(arr[i-1]==-1){
                int a=i;
                while(a<=n){
                    v.push_back(a);arr[a-1]=0;
                    a*=2;
                }
            }
        }
        for(auto &value: v) 
        cout<<value<<" ";
        cout<<endl;
    }
}