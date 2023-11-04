#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        vector<int> v1;
        vector<int> v2;
        int n; cin>>n;
        for(int i=0;i<n;i++){
            int s,e;
            cin>>s>>e;
            v1.push_back(s);
            v2.push_back(e);
        }
        int minn=v1[0]+1;
        int maxx=INT_MAX;
        for(int i=1;i<n;i++){
            if(v1[i]>minn) minn=max(minn,v1[i]+1);
            else maxx=min(maxx,v1[i]);
        }
        int w=minn;
        while(w<=maxx){
            bool flag=true;
            for(int i=1;i<n;i++){
                if(v1[i]>w) {flag=false;
                break;}
                else if(v1[i]==w && v2[i]>=v2[0])
                {
                    flag=false; break;
                }
            }
            if(flag){cout<<w<<endl; break;}
            else w++;
        }
        if(w>maxx) cout<<-1<<endl;
    }
}