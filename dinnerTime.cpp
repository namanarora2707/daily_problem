#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;

        int k = n / p;     
        int r = n % p;      

        if (r == 0) {
            if (m == k * q) cout << "YES\n";
            else cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
