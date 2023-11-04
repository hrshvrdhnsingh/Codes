#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        bool flag=false;
        for(int i=0;i<k;i++){
            int a,b;
            cin>>a>>b;
            if((x+y)%2==(a+b)%2) {flag=true;break;}
        }
        if(flag==true) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}