#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int b=n*(n-1)/2;
        int arr[b];
        for(int i=0;i<b;i++){
            cin>>arr[i];
        }
        sort(arr,arr+b);
        int a[n],c=0;
        for(int i=0;i<b;i++){
            a[c++]=arr[i];
            i=i+(--n)-1;
        }
        a[c++]=a[c-1];
        for(int i=0;i<c;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
}