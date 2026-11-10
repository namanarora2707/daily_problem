
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;

            if (s[i] != s[j]) {
                if (s[i] == c || s[j] == c) {
                    ans += 1;
                } else {
                    ans += 2;
                }
            }
        }

        results.push_back(ans);
    }

    for (int x : results) {
        cout << x << '\n';
    }

    return 0;
}
