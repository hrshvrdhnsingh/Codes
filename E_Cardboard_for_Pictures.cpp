#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n,c; cin>>n>>c;
        int sn=0,ss=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            int a; cin>>a;
            sn+=a; ss+=a*a;
        }
        int low=1,high=10e10;
        int w,check;
        while(low<=high){
            w=(low+high)/2;
            check= ss + (4*n*w*w) + (4*w*sn);
            if(check==c){flag=true; break;}
            else if(check<c) low+=1;
            else if(check>c) high-=1;
        }
        cout<<w<<endl;
    }
}