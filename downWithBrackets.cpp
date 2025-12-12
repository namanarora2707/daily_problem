#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int bal = 0, n = s.size();
        bool multi = false;

        for (int i = 0; i < n; i++) {
            bal += (s[i] == '(' ? 1 : -1);
            if (bal == 0 && i != n - 1) {
                multi = true;   
                break;
            }
        }

        if (multi) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
