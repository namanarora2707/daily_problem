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

        int cnt0 = count(s.begin(), s.end(), '0');
        int cnt1 = n - cnt0;

        int total = n / 2;
        int bad = total - k;

        int max_good = cnt0 / 2 + cnt1 / 2;

        if (k > max_good) {
            cout << "NO\n";
            continue;
        }

        if (bad > min(cnt0, cnt1)) {
            cout << "NO\n";
            continue;
        }

        if (bad % 2 != min(cnt0, cnt1) % 2) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
    return 0;
}
