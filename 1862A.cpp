#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        char ch[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch[i][j];
            }
        }
        string s="vika";int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ch[j][i]==s[c]){
                    c++;break;
                }
            }
        }
        if(c==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}