
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    // Initially available starting letters
    bool available[26] = {};

    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;

        available[w[0] - 'a'] = true;
    }

    vector<string> a(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    vector<bool> done(m, false);

    int processed = 0;

    // Try to create abbreviations whenever possible
    while (true) {
        bool changed = false;

        for (int i = 0; i < m; i++) {

            if (done[i]) continue;

            bool possible = true;

            // Check whether every character is available
            for (char c : a[i]) {
                if (!available[c - 'A']) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                done[i] = true;
                processed++;

                changed = true;

                // Its first letter becomes available
                available[a[i][0] - 'A'] = true;
            }
        }

        // No more abbreviations can be created
        if (!changed) break;
    }

    cout << (processed == m ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
