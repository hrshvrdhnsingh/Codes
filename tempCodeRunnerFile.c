#include <bits/stdc++.h>
using namespace std;
#define evec(x) sort(x.begin(),x.end()) 
int main()
{
  int t;cin>>t;
  while(t--){
    int i,n,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    vector<int> v;
    for(i=0;i<n-1;i++){
       sum+=v.pushback(abs(a[i]-a[i+1]));
    }
    evec(v);
    for(i=1;i<k;i++)
    sum-=v.popback();
  }
  cout<<sum<<"\n";
}