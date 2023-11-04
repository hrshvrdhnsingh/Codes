#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    ll k = 1,m = 1; ll arr[n];
    for(int i=0;i<n/2;i++) {arr[i]=k*2; k++;}
    for(int i=n/2;i<n;i++) {arr[i]=m; m+=2;}
    if(n<4 && n>1) cout<<"NO SOLUTION"<<endl;
    else{
       for(int i=0;i<n;i++) cout<<arr[i]<<" ";
       cout<<endl;
    }
}