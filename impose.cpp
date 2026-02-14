#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string r;
        cin >> r;

        int n = r.size();
        int totalS = 0;

        for (char c : r)
            if (c == 's')
                totalS++;

        int answer = n; 

        for (int d = 1; d < n; d++) {
            for (int start = 0; start < d; start++) {
                int needed = 0;
                int haveS = 0;

                for (int pos = start; pos < n; pos += d) {
                    needed++;
                    if (r[pos] == 's')
                        haveS++;
                }

                if (haveS >= 2) {
                    answer = min(answer, needed - haveS);
                }
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
