#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++) {
            int c;
            cin >> c;
            freq[c]++;
        }

        int single = 0, multi = 0;
        for (auto &p : freq) {
            if (p.second == 1) single++;
            else multi++;
        }

        int aliceMoves = (n + 1) / 2;

        int takeSingle = min(single, aliceMoves);
        int score = takeSingle * 2;

        aliceMoves -= takeSingle;
        score += min(multi, aliceMoves);

        cout << score << "\n";
    }
    return 0;
}
