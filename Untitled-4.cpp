#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    bool flag=true;
    int len=s.length();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1]) {flag=false;break;}
    }
    return flag;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n;string s;
        cin>>n>>s;
        string out="";
        for(int i=0;i<=n;i++){
            string ne="";
            
            for(int j=0;j<i;j++) ne=ne+"1";for(int k=0;k<n-i;k++) ne=ne+"0";
            string mod;
            for(int i=0;i<n;i++)
            mod+=(s[i]==ne[i])?'0':'1';
            if(check(mod)) out=out+"1";
            else out+="0";
        }
        cout<<out<<endl; 
    }
}