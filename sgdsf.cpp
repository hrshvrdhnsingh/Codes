#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> vn(n);
        vector<int> vm(m);
        for(int i=0;i<n;i++) cin>>vn[i]; sort(vn.begin(), vn.end());
        for(int i=0;i<m;i++) cin>>vm[i]; sort(vm.begin(), vm.end(), greater<int>());
        int j=0;
        for(int i=0;i<k;i++){
            
                swap(vn[0], vm[0]);
            i++;
            else break;
        }
        cout<<accumulate(vn.begin(), vn.end(), 0)<<endl;
    }
}