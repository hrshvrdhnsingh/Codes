#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,A,B;
    cin>>n>>A>>B;
    vector<int> v;
    ll sum=0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        sum+=a;
        v.push_back(a);
    }
    int fir=v[0];
    sort(v.begin()+1,v.end());
    int c=0;
    while(true){
        ll check=fir*A/sum;
        if(check>=B) break;
        else{
            sum-=*max_element(v.begin()+1,v.end()-c);
            c++;
        }
    }
    cout<<c<<endl;
}