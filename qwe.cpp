#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int sta, end;
        cin>>sta>>end;
        vector<int> v1,v2;
        for(int i=1;i<n;i++){
            int s,e;
            cin>>s>>e;
            if(s>=sta) {v1.push_back(s);v2.push_back(e);}
        }
        bool flag=true;
        for(auto &value: v2){
            if(value>=end){flag=false; break;}
        }
        
        if(flag) cout<<sta<<endl;
        else cout<<-1<<endl;
    }
}