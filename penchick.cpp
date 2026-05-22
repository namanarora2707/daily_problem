#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }

        bool ok = true;

        for(int i = 0; i < n; i++) {
            if(abs(p[i] - (i + 1)) > 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}