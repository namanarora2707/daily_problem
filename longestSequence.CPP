
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<pair<int, int>> ans;

    while (t--) {
        int x0, y0, R;
        cin >> x0 >> y0 >> R;

        int x = x0 + R;
        int y = y0;

        ans.push_back({x, y});
    }

    // Print all outputs
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}
