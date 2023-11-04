#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    ll arr[n]={0};
    for(int i=1;i<n;i++){
        int a; cin>>a;
        arr[a-1]=1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0) cout<<i+1<<endl;
    }
}