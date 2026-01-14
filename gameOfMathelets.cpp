#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int x : a) {
            freq[x]++;
        }

        long long score = 0;

        for (int x : a) {
            if (freq[x] == 0) continue;

            int need = k - x;

            if (freq.count(need) && freq[need] > 0) {
               
                if (x == need && freq[x] < 2) continue;


                freq[x]--;
                freq[need]--;
                score++;
            }
        }

        cout << score << "\n";
    }

    return 0;
}
