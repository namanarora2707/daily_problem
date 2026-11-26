#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    // Sort the three values
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    // If any two values are already equal
    if (arr[0] == arr[1] || arr[1] == arr[2]) {
        cout << 0 << '\n';
        return;
    }

    // Minimum rounds before two values become equal
    int ans = min(arr[1] - arr[0],
                  arr[2] - arr[1]);

    cout << ans << '\n';
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
