#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        map<string, int> mp;
        mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;
        int ans = 1e9;
        for(int i = 0; i < n; ++i) {
           int x; cin >> x; string s; cin >> s;
           mp[s] = min(mp[s], x);
        }
        if(min(mp["11"], mp["10"] + mp["01"]) > (int)1e6) {
            cout << "-1\n";} 
        else {
            cout << min(mp["11"], mp["10"] + mp["01"]) << "\n";
        }
}
        
}
