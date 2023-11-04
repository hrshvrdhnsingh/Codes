#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        int tk=m/k; int t1=m%k;
        int tf1=max(0,t1-a1);
        int left1 = max(0,a1-t1);
        int tfk= max(0,tk-ak);
        int rep= min(left1/k,tfk);
        int ans=tf1+tfk-rep;
        cout<<ans<<endl;
    }
}