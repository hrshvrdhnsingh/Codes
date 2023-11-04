#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,n,c=0; cin>>b>>g>>n;
    int bc,gc;
    for(int i=0;i<=n;i++){
        bc=n-i;gc=i;
        if(bc<=b && gc<=g) c++;
        bc--;gc++;
    }
    cout<<c;
}