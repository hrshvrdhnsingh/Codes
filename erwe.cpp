#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        sort(x.begin(), x.end(), greater<int>());

        long long max_time = b;
        long long curr_time = b;

        for (int i = 0; i < n; i++) {
            if (x[i] >= a) x[i]=a-1;
            curr_time += x[i];
            max_time = max(max_time, curr_time);
        }

        cout << max_time << endl;
    }

    return 0;
}
