
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0;
        int first = -1, last = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;

                if (first == -1) {
                    first = i;
                }

                last = i;
            }
        }

        int result;

        if (cnt == 1) {
            result = 0;
        }
        else if (cnt == 2) {
            result = 1;
        }
        else {
            result = last - first;
        }

        ans.push_back(result);
    }

    for (int x : ans) {
        cout << x << "\n";
    }

    return 0;
}
