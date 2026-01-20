
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

        vector<int> p(n, 0);
        int low = 1, high = n;

        for (int i = 0; i < n; i += k) {
            int end = min(i + k - 1, n - 1);

            // place smallest at the end of the block
            p[end] = low++;

            // fill remaining with largest numbers
            for (int j = i; j < end; j++) {
                p[j] = high--;
            }
        }

        for (int x : p) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
