#include <bits/stdc++.h>
using namespace std;
#define M 1e9+7
int main()
{
    int n,k; cin>>n>>k;
    string s; cin>>s; 
    unordered_map <char,int> last;
    unordered_set<char> act;
    for(int i=0;i<n;i++) 
        last[s[i]]=i;
    for(int i=0;i<n;i++){
        act.insert(s[i]);
        if(act.size()>k) {cout<<"YES"<<endl; return 0;}
        if(last[s[i]]==i) act.erase(s[i]);
    }
    cout<<"NO"<<endl;
    return 0;
}