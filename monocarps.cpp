
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while (t--) {
        int n;
        cin >> n;

        int a[100005];
        int easy = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 0) {
                easy++;
            }
        }

        if (easy < 2) {
            ans.push_back(-1);
        }
        else {
            int operations = 0;

            if (a[0] == 1) {
                operations++;
            }

            if (a[n - 1] == 1) {
                operations++;
            }

            ans.push_back(operations);
        }
    }

    for (int x : ans) {
        cout << x << "\n";
    }

    return 0;
}
