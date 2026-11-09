
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<vector<int>> results;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        map<int, int, greater<int>> freq;

        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        vector<int> ans;

        // First add all distinct numbers
        for (auto p : freq) {
            ans.push_back(p.first);
        }

        // Find maximum frequency
        int mx = 0;

        for (auto p : freq) {
            mx = max(mx, p.second);
        }

        // Add duplicates round by round
        for (int round = 2; round <= mx; round++) {

            for (auto p : freq) {

                if (p.second >= round) {
                    ans.push_back(p.first);
                }
            }
        }

        results.push_back(ans);
    }

    // Print all outputs together
    for (int i = 0; i < results.size(); i++) {

        for (int j = 0; j < results[i].size(); j++) {
            cout << results[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
