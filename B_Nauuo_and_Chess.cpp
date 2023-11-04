#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int m=abs(n/2)+1; cout<<m<<endl;
    for(int i=1;i<=m;i++) cout<<i<<" "<<1<<endl;
    for(int i=2;i<=n-m+1;i++) cout<<m<<" "<<i<<endl;
}