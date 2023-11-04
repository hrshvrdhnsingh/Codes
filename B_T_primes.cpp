#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N= 1e6+10;
vector<bool> isPrime(N,1);
int main()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<N;j+=i)
                isPrime[j]=false;
        }
    }
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        if(sqrt(n)==(int)sqrt(n)){
            int no=sqrt(n);
            if(isPrime[no]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}