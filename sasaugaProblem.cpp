
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<long long> answers;

    for (int i = 0; i < t; i++) {
        long long n, k;
        cin >> n >> k;

        long long ans = (1LL << (n - k + 1)) + 2 * (k - 1);

        answers.push_back(ans);
    }

    for (long long ans : answers) {
        cout << ans << '\n';
    }

    return 0;
}
