#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        int a[n],b[n];
        ll sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        int x=*min_element(a,a+n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            sum2+=b[i];
        }
        int y=*min_element(b,b+n);
        
        ll out1= sum1+(n*y);
        ll out2= sum2+(n*x);
        cout<<min(out1,out2)<<endl;
    }
}