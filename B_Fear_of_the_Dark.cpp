#include <bits/stdc++.h>
using namespace std;
#define ll long double
ll distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
bool check(ll r,ll p1,ll p2,ll a1,ll a2,ll b1,ll b2) {
    ll dpa = distance(p1,p2,a1,a2);
    ll dpb = distance(p1,p2,b1,b2);
    ll dab = distance(a1,a2,b1,b2);

    ll dpab = abs((a1-b2)*(p1-a1) - (a2-b2)*(p2-a2))/dab;

    return(((dpa<=r)&&(dpb<=r)) || dpab<=r);
}
int main()
{
    ll t; cin>>t;
    while(t--){
        ll p1,p2,a1,a2,b1,b2;
        cin>>p1>>p2>>a1>>a2>>b1>>b2;
        std::cout.precision(10);
        std::cout.setf(std::ios::fixed,std::ios::floatfield);
        ll left=0.0;
        ll right=2e5;
        
        while(right-left>=1e-7){
            ll mid= (right+left)/2;
            if(check(mid,p1,p2,a1,a2,b1,b2)) right=mid;
            else left=mid;
        }

        cout<<left<<endl;
    }
}