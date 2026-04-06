#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        if (n == 2) {
            cout << a[1] - a[0] << "\n";
            continue;
        }

        sort(a.begin(), a.end());

        long long sum = 0;
        for (int i = 0; i < n-2; i++) {
            sum += a[i];
        }

        long long ans = a[n-1] + sum - a[n-2];

        cout << ans << "\n";
    }

    return 0;
}