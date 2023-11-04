#include <bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int k=1;
        int arr[n],brr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(i==0 && arr[0]==1) brr[0]=2;
            else if(i==0 && arr[0]!=1) brr[0]=1;
            else if(arr[i]==brr[i-1]+1) brr[i]=brr[i-1]+2;
            else brr[i]=brr[i-1]+1;            
        }
        cout<<brr[n-1]<<endl;
    }
}