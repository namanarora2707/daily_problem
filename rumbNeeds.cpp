
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        vector<int> pos;

        for (int i = 0; i < n; i++) {
            cin >> p[i];

            if (p[i] != i + 1) {
                pos.push_back(i);
            }
        }

        int k = pos.size();
        bool possible = true;

        for (int i = 0; i < k; i++) {
            if (p[pos[i]] != pos[k - 1 - i] + 1) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
