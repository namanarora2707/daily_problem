#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        // check any block of consecutive '1' with length >= k
        int cur = 0;
        bool bad = false;
        for (char ch : s) {
            if (ch == '1') {
                cur++;
                if (cur >= k) { bad = true; break; }
            } else cur = 0;
        }
        if (bad) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        int c = 0;
        for (char ch : s) if (ch == '1') ++c;
        int small = 0;      // will produce 1..c for '1' positions
        int large = c;      // will produce c+1..n for '0' positions
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                cout << (++small);
            } else {
                cout << (++large);
            }
            if (i+1 < n) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
