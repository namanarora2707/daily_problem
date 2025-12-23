#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (k == 0) {
            cout << (s < rev ? "YES\n" : "NO\n");
        } else {
            bool allSame = true;
            for (int i = 1; i < n; i++) {
                if (s[i] != s[0]) {
                    allSame = false;
                    break;
                }
            }
            cout << (allSame ? "NO\n" : "YES\n");
        }
    }
    return 0;
}
