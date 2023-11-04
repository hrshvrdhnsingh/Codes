#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--){
        ll n,flag=1;cin>>n;long long arr[n];
        long long fence[n][n]={0};
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<ll>());
        ll max=*max_element(arr,arr+n);
        if(max!=n) cout<<"NO"<<endl;
        else{
        for(ll i=0;i<n;i++){
            for(ll j=0;j<arr[i];j++){
                fence[j][i]=1;
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(fence[i][j]!=fence[j][i]){flag=0;break;}
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
}