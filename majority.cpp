#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ones = 0;
        int blocks = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ones++;
                if (i == 0 || s[i - 1] == '0')
                    blocks++;
            }
        }

        cout << (ones > blocks ? "YES" : "NO") << '\n';
    }

    return 0;
}