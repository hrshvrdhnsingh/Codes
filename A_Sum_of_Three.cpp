#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin>>t; 
    while(t--){
        int flag=0;
        ll n; cin>>n; int arr[3];
        if(n<7) cout<<"NO"<<endl;
        else if(n%3==0){
            if((n-5)%3!=0 && (n-5)!=4 && (n-5)!=1){
                cout<<"YES"<<endl;
                cout<<1<<" "<<4<<" "<<(n-5)<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<1<<" "<<2<<" "<<n-3<<endl;
        }
    }
}