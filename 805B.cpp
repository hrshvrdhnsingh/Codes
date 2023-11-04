#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    for(int i=0;i<n/2;i++){
        if(i%2==0) s.append("aa");
        else s.append("bb");
    }
    if(n%2!=0){
        if(s[n-2]=='a') s=s+'b';
        else s=s+'a';
    }
    cout<<s<<endl;
}