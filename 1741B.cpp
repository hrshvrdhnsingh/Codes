#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <math.h>
int main()
{
    int t;cin>>t;
    while(t--){
        int n,i;cin>>n;
        string s="";
        for(i=1;i<=n;i++)
        s=s+(char)(48+i);
        int flag=0;
        while(next_permutation(s.begin(),s.end())){
           for(i=0;i<n;i++){
            if(s[i]!=i+1){
                if(i==0 && abs(s[0]-s[1])!=1) {flag=1;break;}
                else if(i==n-1 && abs(s[n-1]-s[n-2])!=1) {flag=1;break;}
                else 
                   if(abs(s[i]-s[i-1])==1 || abs(s[i]-s[i+1]==1)) continue;
                   else {flag=1;break;}
            }
            else break;
            
           }
           if(flag!=1) {
            for(i=0;i<n;i++)
            cout<<s[i]<<" ";
            cout<<"\n";
            break;}
        }
    }
}