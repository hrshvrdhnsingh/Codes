#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    ll gc = __gcd(x,y);
    x/=gc; y/=gc;
    cout<< min(a/x,b/y);
}