
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while (t--) {
        int n;
        cin >> n;

        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        int minimum = min(a1, min(a2, a3));

        int weak = n - minimum;

        ans.push_back(weak);
    }

    // Print all outputs together
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}
