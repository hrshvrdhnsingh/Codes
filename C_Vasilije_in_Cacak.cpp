#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,x,k,flag;
void check(ll arr[], int i, int currSum)
{
    if (currSum == x && i==k)
    {
        flag=1;return;
    }
    if (currSum<x && i<n)
    {
        check(arr, i + 1, currSum + arr[i]);
        check(arr, i + 1, currSum);
    }
}
int main()
{
    ll t; cin>>t;
    while(t--){
        cin>>n>>k>>x;
        flag=0;
        ll arr[n];
        for(ll i=0;i<n;i++) arr[i]=i+1;
        check(arr, 0, 0);
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}