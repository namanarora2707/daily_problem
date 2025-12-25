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
 
        vector<int> p(2 * n + 1, 0);
        vector<bool> used(2 * n + 1, false);
 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x;
                cin >> x;
                p[i + j] = x;
                used[x] = true;
            }
        }
 
        for (int i = 1; i <= 2 * n; i++) {
            if (!used[i]) {
                p[1] = i;
                break;
            }
        }
 
        for (int i = 1; i <= 2 * n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}