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

        string s;
        cin >> s;

        long long dash = 0, under = 0;

        for (char c : s) {
            if (c == '-') dash++;
            else under++;
        }

        if (dash < 2 || under == 0) {
            cout << 0 << "\n";
            continue;
        }

        long long x = dash / 2;
        long long y = dash - x;

        long long ans = under * x * y;
        cout << ans << "\n";
    }

    return 0;
}