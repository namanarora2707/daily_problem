
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int odd = 0, zero = 0, two = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 != 0) {
            odd++;
        }
        else if (x % 4 == 0) {
            zero++;
        }
        else {
            two++;
        }
    }

    cout << max({odd, zero, two}) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
