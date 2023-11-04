#include <iostream>
#include <cmath>

using namespace std;

int min_divisor(int n) {
    for (int d = 2; d <= sqrt(n); d++) {
        if (n % d == 0) {
            return d;
        }
    }
    return 1;
}

int main() {
    int t,flag=0;
    cin >> t;
    while (t--) {
        int l, r;
        cin>>l>>r;
        for (int x = min(l,r); x <= max(l,r); x++) {
            int md = min_divisor(x);
            if (md != x && md!=1) {
                cout << md << " " << x - md << endl; flag=1;
                break;
            }
        } 
        if (flag==0) cout << -1 << endl;
    }
    return 0;
}
