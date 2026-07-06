#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Count odd frequencies
        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1)
                odd++;
        }

        int remaining = n - k;
        int need = remaining % 2;

        if (odd <= k + need)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}