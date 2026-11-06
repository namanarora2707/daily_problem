
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int result;

        if (a == 0 && b == 0) {
            result = 0;
        }
        else if (a == 0 && b > 1) {
            result = -1;
        }
        else {
            result = max(a, b + 1);
        }

        ans.push_back(result);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}
