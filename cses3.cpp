#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    int c=0,maxx=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]) {c++;maxx = max(c,maxx);}
        else c=0;
    }
    cout<<maxx+1<<endl;
}