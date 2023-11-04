#include <iostream>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin>>n>>k>>x;
        ll sum=k*(k + 1)/2;
        bool flag = (x<= (n*k-(k*(k-1)/2)))?true:false;
        if ((x>=sum) && flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}