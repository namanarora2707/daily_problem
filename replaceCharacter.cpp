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

        string s;
        cin >> s;

        if (n == 1) {
            cout << s << "\n";
            continue;
        }
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        char maxChar = 'a';
        int maxFreq = 0;

        char minChar = 'z';
        int minFreq = n + 1;

        for (auto it : freq) {
            char c = it.first;
            int f = it.second;

            if (f > maxFreq || (f == maxFreq && c > maxChar)) {
                maxFreq = f;
                maxChar = c;
            }

            if (f < minFreq || (f == minFreq && c < minChar)) {
                minFreq = f;
                minChar = c;
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == minChar) {
                s[i] = maxChar;
                break; 
            }
        }

        cout << s << "\n";
    }

    return 0;
}
