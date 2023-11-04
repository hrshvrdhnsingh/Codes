#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    ll c=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]) {c+=arr[i-1]-arr[i];arr[i]=arr[i-1];}
    }
    cout<<c<<endl;
}