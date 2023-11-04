#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n+10];
    int gfd[n+10];
    int gbd[n+10];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        gfd[i]=__gcd(arr[i],gfd[i-1]);
    }
    for(int i=n;i>=1;i--){
        gbd[i]=__gcd(arr[i],gbd[i+1]);
    }
    int q; cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        cout<<__gcd(gfd[l-1],gbd[r+1])<<endl;
    }
}