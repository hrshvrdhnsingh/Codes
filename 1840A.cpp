#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int i,j;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    cout<<s[i];
                    i=j;
                    break;
                }
            }
        }cout<<"\n";
    }
    return 0;
}