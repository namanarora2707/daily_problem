
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long a, b, x;

        // Read Bea's mountains
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (i == 0) a = x;
        }

        // Read Ver's mountains
        for (int i = 0; i < m; i++) {
            cin >> x;
            if (i == 0) b = x;
        }

        // Total attacks required to defeat each giant
        long long A = a + n - 1;
        long long B = b + m - 1;

        // Bea attacks first
        if (B <= A) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }

    return 0;
}