
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (i % 2 == 0) {
                sum += x;
            }
            else {
                sum -= x;
            }
        }

        ans.push_back(sum);
    }

    // Print all answers
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
