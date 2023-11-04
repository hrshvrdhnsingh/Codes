#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t; cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(), v.end(), greater<int>());
        ll sum=b, output=b;
        for(int i=0;i<n;i++){
            if(v[i]>=a) v[i]=a-1;
            sum+=v[i];
            output=max(sum, output);
        }
        cout<<output<<endl;
    }
}