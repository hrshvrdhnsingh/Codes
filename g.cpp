#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll n, ll k, ll x, ll currsum, vector<int> v, int i) {
    if (k == 0 && currsum == x) return 1;
    if (k == 0 || i > n) return 0;

    v[i] = i;
    if (check(n, k - 1, x, currsum + i, v, i + 1)) return 1;

    return check(n, k, x, currsum, v, i + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;

        vector<int> v(n+1,0);
        int flag = check(n, k, x, 0, v, 1);

        if (flag==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}