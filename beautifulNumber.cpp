#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int sum = 0;
        vector<int> cap;

        for (int i = 0; i < (int)s.size(); i++) {
            int d = s[i] - '0';
            sum += d;

            if (i == 0)
                cap.push_back(d - 1);   // first digit cannot become 0
            else
                cap.push_back(d);       // others can become 0
        }

        if (sum <= 9) {
            cout << 0 << '\n';
            continue;
        }

        int need = sum - 9;

        sort(cap.rbegin(), cap.rend());

        int ans = 0, cur = 0;
        for (int x : cap) {
            cur += x;
            ans++;
            if (cur >= need) break;
        }

        cout << ans << '\n';
    }

    return 0;
}