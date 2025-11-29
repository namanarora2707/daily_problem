#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Case: both ends missing
        if (a[0] == -1 && a[n - 1] == -1) {
            a[0] = a[n - 1] = 0;
        }
        // Case: only a[0] missing
        else if (a[0] == -1) {
            a[0] = a[n - 1];
        }
        // Case: only a[n-1] missing
        else if (a[n - 1] == -1) {
            a[n - 1] = a[0];
        }

        // Fill internal -1's with 0 for lexicographically smallest
        for (int i = 1; i < n - 1; i++) {
            if (a[i] == -1) a[i] = 0;
        }

        long long result = llabs(a[n - 1] - a[0]);
        cout << result << "\n";

        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
    return 0;
}
