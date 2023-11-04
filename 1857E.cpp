#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,a;cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++){ 
            for(int j=0;j<n;j++){
                sum+=abs(v[i]-v[j])+1;
            }
            cout<<sum<<" ";
        }
        sort(x+1,x+n+1);
        for(int -=1)
        cout<<"\n";
    }
    
}