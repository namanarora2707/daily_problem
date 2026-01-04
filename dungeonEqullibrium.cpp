#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        unordered_map<int, int> freq;
        for (int x : a)
            freq[x]++;

        int deletions = 0;

        for (auto it : freq) {
            int value = it.first;
            int count = it.second;

            if (count >= value)
                deletions += count - value;
            else
                deletions += count;
        }

        cout << deletions << "\n";
    }
    return 0;
}
